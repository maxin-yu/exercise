#include<stdio.h>
int main()
{
	int n;
	int i,j,t;
	int a[1000];
	int h;
	int c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	
	for(i=0;i<n;i++){
		if(a[i]>=n-i){
			h = n-i;
			break;
		}
	}
	printf("%d",h);
	return 0;
 }


