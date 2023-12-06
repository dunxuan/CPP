#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MaxNum 100
typedef struct pcb //定义进程控制块
{
	char Name[MaxNum]; //进程名
	int arrivetime; //到达时间
	int runtime; //运行时间
	int wholetime; //固定运行时间
	int FinishTime; //完成时间
	double WeightTime; //周转时间
	double WeightWholeTime; //带权周转时间
	char state; //运行后的状态
	struct pcb *next;
} PCB;
//全局变量
int N; //实际进程数
double SumWT; //周转时间之和
double SumWWT; //带权周转时间之和
double AverageWT; //平均周转时间
double AverageWWT; //平均带权周转时间
typedef struct //定义队列，封装头结点，指针分别指向队头和队尾
{
	PCB *front, *rear;
} queue;
queue *init() //进程队列置空
{
	queue *head;
	head = (queue *)malloc(sizeof(queue));
	head->front = NULL;
	head->rear = NULL;
	return head;
}
int empty(queue *head) //检验队列是否为空
{
	return (head->front ? 0 : 1);
}

queue *append(queue *head, char c[MaxNum], int a, int r,
	      char s) //进程队列入队，往后插入
{
	PCB *p;
	p = (PCB *)malloc(sizeof(PCB));
	strcpy(p->Name, c);
	p->arrivetime = a;
	p->runtime = r;
	p->wholetime = r;
	p->state = s;
	//p->FinishTime=0;
	//p->WeightTime=0;
	//p->WeightWholeTime=0;
	p->next = NULL;
	if (empty(head))
		head->front = head->rear = p;
	else {
		head->rear->next = p;
		head->rear = p;
	}
	return head;
}
queue *creat(queue *head) //创建进程队列
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
void print(queue *head) //输入创建的进程队列
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

/*******************时间片轮转法调度算法的实现**************************/
void RR(queue *head, int q)
{
	int t = head->front->arrivetime, lt = head->rear->arrivetime;
	if (head->front->runtime < q)
		t = t + head->front->runtime;
	else
		t = t + q;
	/****进程队列为不空才可调度*****/
	while (!empty(head)) {
		PCB *p1, *p2;
		printf("\n时刻   进程   运行后的状态\n");
		/*第一种情况：当前运行的时间小于最后一个进程到达时间做一下操作*/
		while (t < lt) {
			p1 = head->front;
			printf("%2d    %s", t, p1->Name);
			p1->runtime = p1->runtime - q;
			//1.运行时间小于0，删除队首
			if (p1->runtime <= 0) {
				p1->state = 'C';
				printf("      %c\n", p1->state);
				p1->FinishTime = t;
				p1->WeightTime =
					p1->FinishTime - p1->arrivetime;
				p1->WeightWholeTime =
					p1->WeightTime / p1->wholetime;
				SumWT += p1->WeightTime;
				SumWWT += p1->WeightWholeTime;
				printf("时刻%2d进程%s运行结束,进程%s周转时间=%5.2f,带权周转时间=%5.2f\n",
				       t, p1->Name, p1->Name, p1->WeightTime,
				       p1->WeightWholeTime);
				head->front = p1->next;
				free(p1);
			}
			//2.运行时间大于0，向后找位置插入
			else {
				printf("       %c\n", p1->state);
				p2 = p1->next;
				while (p2->next && p2->arrivetime != t) {
					p2 = p2->next;
				}
				//此时无新进入队列的进程，有两种情况：1.不用找位置往后插入，队首不变，不做操作
				//2.找位置往后插入
				if (p2->arrivetime != t) {
					PCB *p3 = p1, *p4;
					while (p3->next && p3->arrivetime < t) {
						p4 = p3;
						p3 = p3->next;
					}
					if (p3->arrivetime > t) {
						if (p4 !=
						    p1) //p1插在p4后，头为p1->next
						{
							head->front = p1->next;
							p1->next = p4->next;
							p4->next = p1;
						} else //不做操作
							p4 = p3 = p2 = NULL;
					} else
						p4 = p3 = p2 = NULL;
				}
				//此时有新进入队列的进程时：p1插在新进入队列的进程p2后，队首为p1->next
				else {
					head->front = p1->next;
					p1->next = p2->next;
					p2->next = p1;
				}
			}
			//时刻变化
			if (head->front->runtime < q)
				t = t + head->front->runtime;
			else
				t = t + q;
		}
		/*************第一种情况结束**************/

		/******************第二种情况：当期运行的时间大于最后一个进程到达的时间做以下操作*********************/
		while (t >= lt) {
			p1 = head->front;
			printf("%2d    %s", t, p1->Name);
			p1->runtime = p1->runtime - q;
			//1.运行时间小于0，删除队首
			if (p1->runtime <= 0) {
				p1->state = 'C';
				printf("      %c\n", p1->state);
				p1->FinishTime = t;
				p1->WeightTime =
					p1->FinishTime - p1->arrivetime;
				p1->WeightWholeTime =
					p1->WeightTime / p1->wholetime;
				SumWT += p1->WeightTime;
				SumWWT += p1->WeightWholeTime;
				printf("时刻%2d进程%s运行结束,进程%s周转时间=%5.2f,带权周转时间=%5.2f\n",
				       t, p1->Name, p1->Name, p1->WeightTime,
				       p1->WeightWholeTime);
				//printf("时刻%2d进程%s运行结束",t,p1->pname);
				head->front = p1->next;
				free(p1);

			}
			//2.运行时间大于0，直接插在队尾
			else {
				printf("      %c\n", p1->state);
				//若原队列只有一个进程，不必往队尾插
				if (!p1->next)
					head->front = p1;
				//若原队列有多个进程
				else {
					head->front = p1->next;
					head->rear->next = p1;
					head->rear = p1;
					p1->next = NULL;
				}
			}
			//时刻变化，队列为空时不做时刻变化
			if (empty(head))
				return;
			else {
				if (head->front->runtime < q)
					t = t + head->front->runtime;
				else
					t = t + q;
			}
		}
		/*******第二种情况结束*********/
	}
}
int main()
{
	queue *head;
	int q;
	head = init();
	head = creat(head);
	printf("\n您输入的时间片轮转进程队列为:\n");
	print(head);
	printf("\n请输入时间片轮转调度的时间片为:");
	scanf("%d", &q);
	//时间片轮转调度
	RR(head, q);
	AverageWT = SumWT / N;
	AverageWWT = SumWWT / N;
	printf("平均周转时间=%5.2f,平均带权周转时间=%5.2f", AverageWT,
	       AverageWWT);
}
