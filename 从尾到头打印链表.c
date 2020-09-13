#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}Node;

int n;
//创建链表 
Node *creat(){
	n= 0 ;
	Node *p1,*p2,*head;
	p1 = p2 = (Node*)malloc(sizeof(Node));
	scanf("%d",&p1->data);
	head = NULL;
	while(p1->data>=0){
		++n;
		if(n==1)	head=p1;
		else p2->next = p1;
		p2=p1;
		p1 = (Node*)malloc(sizeof(Node));
		scanf("%d",&p1->data);
	}
	p2->next = NULL;
	return head;
}

//输出链表 
void print(Node *head){
	Node *p;
	p = head;
	int a[100];
	int i=0;
	for(p=head;p;p=p->next){
		a[i] = p->data;
		i++;
	} 
	i=i-1;
	while(i>=0){
		printf("%2d",a[i]);
		i--;
	}
}

int main()
{
	Node *pt;
	pt = creat();
	print(pt);
	return 0;
}

