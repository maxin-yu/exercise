 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	int i,j;
	int len;
	gets(str);
	len = strlen(str);
	for(i=0;i<len;i++){
		if(str[i]>='a'&&str[i]<='z'){
			for(j=i+1;j<len;j++){
				if(str[j]==str[i]){
					str[j] = str[j] -32;
				}
			}
		}
	}
	
	for(i=0;i<len;i++){
		if(str[i]>='a'&&str[i]<='z'){
			printf("%c",str[i]);
		}
	}
	
	return 0;
 }

