#include<stdio.h>
#include<math.h>
int main()
{
	int i,m,n;
	scanf("%d",&n);
	m = sqrt(n);
	m = (int)m;
	if(m*m==n){
		printf("true");
	}
	else{
		printf("false"); 
	}
	return 0;
}
