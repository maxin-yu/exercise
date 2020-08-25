#include<stdio.h>
int main()
{
	int n;
	int i,j,k,t;
	int flag=0;
	int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]<a[j+1]){
				t=a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=i+2;k<n;k++){
				if(a[k]+a[j]>a[i]){
					flag = 1;
					printf("%d",a[i]+a[j]+a[k]);
					break;
				}
			}
			if(flag==1){
				break;
			}
		}
		if( flag ==1 ){
			break;
		}
	}
	
	if(flag==0){
		printf("0");
	}	
	return 0;
}

