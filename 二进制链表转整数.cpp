#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}Node;

int n;
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

int Tr(Node *head){
	Node *q;
	q = head;
	int c=0;
	int sum = 0;
	for(q=head;q;q=q->next){
		c++;
	}
	for(q=head;q;q=q->next){
		sum = sum+q->data*pow(2,c-1);
		c--;
	}
	return sum;

}

int main()
{
	Node *pt;
	int sum;
	pt = creat();
	sum=Tr(pt);
	printf("%d",sum);
	return 0;
}

