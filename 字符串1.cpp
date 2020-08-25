#include<stdio.h>
int main(void)
{
	int i,c;
	char str[100];
	scanf("%s",&str); 
	for(i=0;str[i]!='\0';i++)
		{
			if(str[i]>='A'&&str[i]<='Z')
				str[i]=str[i]+32;
		}
		for(i=0;str[i]!='\0';i++)
	   {
		printf("%c",str[i]);
	   }
	   return 0;
 } 
