
 
#include<stdio.h>
int main()
{
	int n;
	int i;
	int a[1000];
	scanf("%d",&n);
	if(n==1||n==0){
		printf("1");
	}
	a[0] = 1;
	a[1] = 1; 
	if(n>1){
		for(i=2;i<n;i++){
		a[i] = a[i-1] + a[i-2];
		}
		printf("%d",a[n-1]);
	}
	
	return 0;
 }

