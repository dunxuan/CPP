#include <bits/stdc++.h>

struct node {
	int data;
	node *next;
};

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	node *now, *prev, *head, *p;
	head = new node;
	head->data = 1;
	head->next = nullptr;
	now = head;
	for (int i = 2; i <= n; i++) {
		p = new node;
		p->data = i;
		p->next = nullptr;
		now->next = p;
		now = p;
	}
	now->next = head;
	now = head;
	prev = head;

	while ((n--) > 1) {
		for (int i = 1; i < m; i++) {
			prev = now;
			now = now->next;
		}
		printf("%d ", now->data);
		prev->next = now->next;
		delete now;
		now = prev->next;
	}
	printf("%d", now->data);
	delete now;

	return 0;
}