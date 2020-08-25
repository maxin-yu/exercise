#include<stdio.h> 
int main()
{
	int n;
	int i,j;
	int sum[10000],a[10000];
	int left,right;
	int c=0,t,k,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d %d",&left,&right);
	
	k=0;
	for(i=0;i<n;i++)
	{
			s = 0;
		for(j=i;j<n;j++){
			s = s+ a[j];
			sum[k] = s;
			k++;
		}
	}
	
	for(i=0;i<k;i++){
		for(j=0;j<k-1;j++){
			if(sum[j]>sum[j+1]){
				t = sum[j];
				sum[j]=sum[j+1];
				sum[j+1] = t;
			}
		}
	}
	
	s=0;
	for(i=left-1;i<right;i++){
		s = s+sum[i];
	}
	printf("%d",s);
	
	return 0;
} 

