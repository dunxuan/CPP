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
		printf("时间片轮转调度队列为空!\n");
	while (p) {
		printf("Name=%s   arrivetime=%d   runtime=%d   state=%c",
		       p->Name, p->arrivetime, p->runtime, p->state);
		printf("\n");
		p = p->next;
	}
}

void FCFS(queue *head)
{
	int t = 0; // 初始时间
	PCB *p;
	printf("\n时刻   进程   运行后的状态\n");
	while (!empty(head)) {
		p = head->front;
		printf("%2d    %s", t, p->Name);
		p->runtime -= 1;

		if (p->runtime <= 0) {
			p->state = 'C';
			printf("      %c\n", p->state);
			p->FinishTime = t + 1;
			p->WeightTime = p->FinishTime - p->arrivetime;
			p->WeightWholeTime = p->WeightTime / p->wholetime;
			SumWT += p->WeightTime;
			SumWWT += p->WeightWholeTime;
			printf("时刻%2d进程%s运行结束,进程%s周转时间=%5.2f,带权周转时间=%5.2f\n",
			       t + 1, p->Name, p->Name, p->WeightTime,
			       p->WeightWholeTime);
			head->front = p->next;
			free(p);
		} else {
			printf("      %c\n", p->state);
		}
		t += 1;
	}
}

int main()
{
	queue *head;
	head = init();
	head = creat(head);
	printf("\n您输入的先来先服务进程队列为:\n");
	print(head);
	// 先来先服务调度
	FCFS(head);
	AverageWT = SumWT / N;
	AverageWWT = SumWWT / N;
	printf("平均周转时间=%5.2f,平均带权周转时间=%5.2f", AverageWT,
	       AverageWWT);
}
