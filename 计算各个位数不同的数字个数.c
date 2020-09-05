#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n;
	int s=9,t=9;
	scanf("%d",&n);
	if(n==1)
		printf("10");
	if(n>1){
		for(i=0;i<n-2;i++){
			s = s*t;
			t--;
		}	
	}
	
	s = pow(10,n) - pow(10,n-1) - s;
	printf("%d",s);
	
	return 0;
}

