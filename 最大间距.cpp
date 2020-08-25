
#include<stdio.h>
int main()
{
	int n;
	int i,j,t;
	int a[1000],b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(n<2){
		printf("0");
	}
	if(n>=2){
		for(i=0;i<n;i++){
			for(j=0;j<n-1;j++){
				if(a[j]>a[j+1]){
					t = a[j];
					a[j] = a[j+1];
					a[j+1] = t;
				}
			}
		}
		j=0;
		for(i=0;i<n-1;i++){
			b[j] = a[i+1] - a[i];
			j++;
		}
		
		int max = b[0];
		for(i=0;i<j;i++){
			if(b[i]>max)
				max = b[i];
		}
		
		printf("%d",max);
		
		
	}
	
	
	return 0;
 }

