#include<stdio.h>
#include <string.h>
int main()
{
	char str[10000];
	int i;
	int c=0;
	int len;
	gets(str);
	len = strlen(str);
	printf("%d\n",len);
	for(i=10;str[i]!=' ';i--){
		c++;
	}
	printf("%d",c);
	
	return 0;
}

