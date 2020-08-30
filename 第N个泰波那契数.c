   
#include<stdio.h>
int main()
{
	int n;
	int t[1000];
	int i;
	scanf("%d",&n);
	t[0] = 0;
	t[1] = 1;
	t[2] = 1;
	for(i=3;i<=n;i++){
		t[i] = t[i-1] + t[i-2] + t[i-3];
	}

	printf("%d",t[n]);
	
	return 0;
}

