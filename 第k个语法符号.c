#include<stdio.h>
int main()
{
	int n;
	int k;
	scanf("%d %d",&n,&k);
	int t;
	t=k%16;
	if(t==2||t==3||t==5||t==8||t==9||t==12||t==14||t==15){
		printf("1");
	}
	else{
		printf("0");
	}
	
	
	return 0;
 }

