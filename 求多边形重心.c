 
#include<stdio.h>
int main()
{
	int n;
	int i,j;
	int n,m;
	int a[1000],b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	
	int s=0,sum=0;
	for(i=0;i<n;i++){
		s= s+a[i];
		sum = sum+b[i];
	}
	a=s/n;
	b=s/n;
	printf("%d,%d",&a,&b);

	return 0;
 }

