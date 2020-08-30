 
#include<stdio.h>
int main()
{
	int m,n;
	int i,j;
	int a[1000];
	int c=1,t;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=m;i++){
		c= c * i;
	}
	if(c>=n){
		printf("0");
	}
	t=m;
	 if(c<n){
		while(1){
			m=m+1;
			c=c*m;
			if(c>=n){
				printf("%d",m-t);
				break;
			}
		}
	}
	return 0;
 }

