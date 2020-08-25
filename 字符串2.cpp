#include<stdio.h>
int main()
{
	char str[10000];
	int c=0,i;
	gets(str);
	for(i=0;str[i]!='\n';i++){
		if(str[i]==' '){
			c++;
		}
	}	
	
	printf("%d",c+1);
	return 0;
 }

