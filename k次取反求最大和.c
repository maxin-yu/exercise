#include<stdio.h>
int main(void)
{
	int n,a[1000],i,j,c,k,sum=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int min ;
	for(i=0;i<k;i++){
		min = a[0];
		for(j=0;j<n;j++){
			if(a[j]<min){
				min = a[j];
				c=j;
			}
		}
		a[c] = -a[c];
	}
	for(i=0;i<n;i++){
	
		sum = sum+a[i];
		}
	printf("%d",sum);
	
	
	return 0;	   
}
