#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	int i,j,t;
	int flag=0;
	int a[100],b[100];
	int sum1=0,sum2=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		sum1 = sum1+a[i];
	}
	for(i=0;i<m;i++){
		sum2 = sum2+b[i];
	}
	t = fabs(sum1-sum2);
	if(t%2==0){
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if( fabs(a[i] - b[j])== t/2){
				printf("[%d,%d]",a[i],b[j]);
				flag = 1;
				break;
			}
		}
		if(flag==1){
			break;
		}
	}
}
	if(flag==0||t%2!=0){
		printf("[]");
	}
	
	return 0;
 } 

