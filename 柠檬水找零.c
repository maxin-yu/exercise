  
#include<stdio.h>
int main()
{
	int n;
	int i,j=0;
	int flag=0;
	int sum = 0;
	int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>5){
			for(j=0;j<i;j++){
				sum = sum +a[j];
			}
			if(sum>=a[i]-5){
				a[i] = 5;
				continue;
			}
			else{
				printf("false");
				flag = 1;
				break;
			}
		}
		}
	if(flag==0)
		printf("true");
	
	return 0;
}

