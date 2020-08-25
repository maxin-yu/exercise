#include<stdio.h>
int main()
{
	int n;
	int c=0;
	int a[100];
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]>2*a[j]&&i<j){
				c++;
			}
		}
	}
	
	printf("%d",c);
	
	
	return 0;
 }


