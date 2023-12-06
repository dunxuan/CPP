#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MaxNum 100

typedef struct pcb {
	char Name[MaxNum];
	int arrivetime;
	int runtime;
	int wholetime;
	int FinishTime;
	double WeightTime;
	double WeightWholeTime;
	char state;
	struct pcb *next;
} PCB;

int N;
double SumWT;
double SumWWT;
double AverageWT;
double AverageWWT;

typedef struct {
	PCB *front, *rear;
} queue;

queue *init()
{
	queue *head;
	head = (queue *)malloc(sizeof(queue));
	head->front = NULL;
	head->rear = NULL;
	return head;
}

int empty(queue *head)
{
	return (head->front ? 0 : 1);
}

queue *append(queue *head, char c[MaxNum], int a, int r, char s)
{
	PCB *p;
	p = (PCB *)malloc(sizeof(PCB));
	strcpy(p->Name, c);
	p->arrivetime = a;
	p->runtime = r;
	p->wholetime = r;
	p->state = s;
	p->next = NULL;
	if (empty(head))
		head->front = head->rear = p;
	else {
		head->rear->next = p;
		head->rear = p;
	}
	return head;
}

queue *creat(queue *head)
{
	char c[MaxNum];
	char s = 'R';
	int a, r, i;
	printf("请输入共有几个进程：\n");
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		printf("请输入第%d 个进程的进程名:\n", i);
		getchar();
		gets(c);
		printf("请输入第%d 个进程的到达时间:\n", i);
		scanf("%d", &a);
		printf("请输入第%d 个进程的服务时间:\n", i);
		scanf("%d", &r);
		head = append(head, c, a, r, s);
	}
	return head;
}

void print(queue *head)
{
	PCB *p;
	p = head->front;
	if (!p)
		printf("队列为空!\n");
	while (p) {
		printf("Name=%s   arrivetime=%d   runtime=%d   state=%c",
		       p->Name, p->arrivetime, p->runtime, p->state);
		printf("\n");
		p = p->next;
	}
}

void SJF(queue *head)
{
	int t = 0; // 初始时间
	PCB *p;
	printf("\n时刻   进程   运行后的状态\n");
	while (!empty(head)) {
		PCB *min_runtime = NULL;
		// 寻找当前可执行的最短作业
		p = head->front;
		while (p) {
			if (p->arrivetime <= t) {
				if (!min_runtime ||
				    p->runtime < min_runtime->runtime) {
					min_runtime = p;
				}
			}
			p = p->next;
		}

		if (min_runtime) {
			printf("%2d    %s", t, min_runtime->Name);
			min_runtime->runtime -= 1;

			if (min_runtime->runtime <= 0) {
				min_runtime->state = 'C';
				printf("      %c\n", min_runtime->state);
				min_runtime->FinishTime = t + 1;
				min_runtime->WeightTime =
					min_runtime->FinishTime -
					min_runtime->arrivetime;
				min_runtime->WeightWholeTime =
					min_runtime->WeightTime /
					min_runtime->wholetime;
				SumWT += min_runtime->WeightTime;
				SumWWT += min_runtime->WeightWholeTime;
				printf("时刻%2d进程%s运行结束,进程%s周转时间=%5.2f,带权周转时间=%5.2f\n",
				       t + 1, min_runtime->Name,
				       min_runtime->Name,
				       min_runtime->WeightTime,
				       min_runtime->WeightWholeTime);
				// 从队列中删除完成的进程
				if (head->front == min_runtime)
					head->front = min_runtime->next;
				else {
					PCB *prev = head->front;
					while (prev->next != min_runtime)
						prev = prev->next;
					prev->next = min_runtime->next;
				}
				free(min_runtime);
			} else {
				printf("      %c\n", min_runtime->state);
			}
			t += 1; 
		} else {
			// 如果没有可执行的进程，则时间前进到下一个进程到达时间
			p = head->front;
			int next_arrival = p->arrivetime;
			while (p) {
				if (p->arrivetime > t) {
					next_arrival = p->arrivetime;
					break;
				}
				p = p->next;
			}
			t = next_arrival;
		}
	}
}

int main()
{
	queue *head;
	head = init();
	head = creat(head);
	printf("\n您输入的短进程优先进程队列为:\n");
	print(head);
	// 短进程优先调度
	SJF(head);
	AverageWT = SumWT / N;
	AverageWWT = SumWWT / N;
	printf("平均周转时间=%5.2f,平均带权周转时间=%5.2f", AverageWT,
	       AverageWWT);
}
