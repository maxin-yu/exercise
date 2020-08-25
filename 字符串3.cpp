#include<stdio.h>
#include <string.h>
int main(void)
{
	int i,j,c=0;
	char a[100],b[100];
	scanf("%s",&a); 
	scanf("%s",&b); 
	for(i=0;a[i]!='\0';i++){
		for(j=0;b[j]!='\0';j++){
			if(a[i]==b[j])
				c++;
		}}
		if(c==strlen(a))
		
		printf("true");
		else  	printf("false");
	
	   return 0;
 } 
