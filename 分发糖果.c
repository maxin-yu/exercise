 
#include<stdio.h>
int main()
{
	int n;
	int a[1000];
	int i ,j;
	int c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	c=n;
	for(i=0;i<n-1;i++){
		if(a[i]!=a[i+1]){
			c++;
		}
	}
	
	printf("%d",c);
	
	return 0;
 }

