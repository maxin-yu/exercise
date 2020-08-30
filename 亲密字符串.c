
#include<stdio.h>
#include<string.h>
int main()
{
	char a[2],b[2];
	gets(a);
	gets(b);
	int i;
	int flag=0;
	char t;
	t = a[0];
	a[0] = a[1];
	a[1] = t;
	for(i=0;i<2;i++){
		if(a[i]!=b[i]){
			printf("false");
			flag =1;
			break;
		}
	}
	if(flag==0){
		printf("true");
	}
	
	return 0;
 }

