#include<stdio.h>
int main()
{
	int n;
	int i,j,t;
	int a[1000];
	int flag = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1]  =t;
			}
		}
	} 
	
	t = a[1] - a[0];
	for(i=0;i<n-1;i++){
		if(a[i+1] - a[i] != t){
			printf("false");
			flag = 1;
			break;
		}
	}
	
	if(flag==0)
		printf("true");
	return 0;
 }

