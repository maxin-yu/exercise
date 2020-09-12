#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}Node;

Node *creat(Node *head);
void print(Node *head);
void delet(Node *head,int k);
 
int main()
{
	int a;
	scanf("%d",&a);
	Node *head;
	head = NULL;
	head = creat(head);
	delet(head,a);
	print(head);
}

//建立链表 
Node *creat(Node *head){
	Node *p,*q;
	p = (Node*)malloc(sizeof(Node));
	q = (Node*)malloc(sizeof(Node));
	scanf("%d",&p->data); //输入节点的值 
	p->next = NULL; // 将新节点指针置为空 
	while(p->data>0){
		if(head == NULL)
			head = p;
		else q->next = p;
		q=p;
		p = (Node*)malloc(sizeof(Node));
		scanf("%d",&p->data);
	}
	q->next= NULL;
	return head;
}

void delet(Node *head,int k){
	Node *q,*t;
	for(q=head;q->next!=0;q=q->next){
		 if(q->next->data == k){
		 	 t = q->next;
		 	 q->next = t->next;
		 	 free(t);
		 }
	}
}

//输出链表 
void print(Node *head){
	Node *temp;
	temp = head;
	while(temp!=NULL){
		printf("%4d",temp->data);
		temp = temp->next;
	}
}

