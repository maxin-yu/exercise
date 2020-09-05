#include<stdio.h>
int main()
{
	int n,max;
	int i,j,k=0,sum=0;
	int a[1000],s[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			sum = sum + a[j];
			s[k] = sum;
			k++;
		}
		sum = 0;
	}
	max = s[0];
	for(i=0;i<k;i++){
		if(s[i]>max){
			max = s[i];
		}
	}
	
	printf("%d",max);
	return 0;
 }

