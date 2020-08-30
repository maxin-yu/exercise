  
#include<stdio.h>
int c(int n,int m);
int main()
{
	int n,m;
	int sum;
	scanf("%d%d",&n,&m);
	sum = c(n,m);
	printf("%d",sum);
	return 0;
}
int c(int n,int m){
	int i;
	int sum = 0;
	for(i=0;i<m;i++){
		sum = sum + n;
	}
	
	return sum;
}

