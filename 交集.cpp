#include<stdio.h>
int main()
{
	int n,m;
	int i,j;
	int a[1000],b[1000];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i] == b[j]&&b[j]!=0){
				printf("%2d",a[i]);
				b[j] = 0;
				break;
			}
		}
	}
	
	
	return 0;
 }

