 
#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,i,a=0,b=0,c=0;
	char str[1000];
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++){
	   if(str[i]=='L')
	     a++;	
	   if(str[i]=='R')
	   	b++;
	   	if(a==b){
	   		c++;
	   		a=0;
	   		b=0;
		   }
}
	printf("%d",c);
	return 0;	   
}
