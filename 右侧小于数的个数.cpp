#include<stdio.h>
int main()
{
	int n;
	int a[1000],b[1000];
	int c=0;
	int i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[j]<a[i]){
				c++;
			}
		}
		b[k] = c;
		k++;
		c=0;
	}
	
	for(i=0;i<k;i++){
		printf("%2d",b[i]);
	}
	
	
	return 0;
 }

