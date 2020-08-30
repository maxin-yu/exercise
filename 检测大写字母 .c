 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	int i;
	int c=0;
	int flag = 0;
	gets(str);
	int len;
	len = strlen(str);
	for(i=1;i<len;i++){
		if(str[i]<='Z'&&str[i]>='A'){
			c++;
		}
	} 
	
	if(c<len-1){
		printf("False");
	}
	i=0;
	if(str[0]>='A'&&str[0]<='Z'){
			if(c==len-1||c==0){
				printf("True");
			}
		}
	
	return 0;
 }

