#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}Node;
int n;

//建立链表 
Node *creat(){
	n = 0;
	Node *p1,*p2,*head;
	p1 = p2 = (Node*)malloc(sizeof(Node));
	scanf("%d",&p1->data);
	head = NULL;
	while(p1->data>=0){
		++n;
		if(n==1) head=p1;
		else p2->next = p1;
		p2 = p1;
		p1 = (Node*)malloc(sizeof(Node));
		scanf("%d",&p1->data);
	} 
	p2->next = NULL;
	return head;
	
} 

//删除重复元素 
Node *del(Node *head){
	Node *p,*q,*t,*m;
	p = head;
	while(p!=NULL){
		q = p;
		while(q->next!=NULL){
			if(p->data==q->next->data){
				q->next = q->next->next;
			}
			else{
				q=q->next;
			}
		}
		p=p->next;
	}	
	return head;
}


//输出链表 
void print(Node *head){
	Node *l;
	for(l=head;l;l=l->next){
		printf("%d",l->data);
	}
}

int main()
{
	Node *pt;
	pt=creat();
	pt = del(pt);
	print(pt);
	return 0;
}

