 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000],a[1000];
	int len;
	int k;
	int i,j=0;
	gets(str);
	scanf("%d",&k);
	len=strlen(str);
	for(i=k;i<len;i++){
		a[j] = str[i];
		j++;
	}
	
	for(i=0;i<k;i++){
		a[j] = str[i];
		j++;
	} 
	puts(a);
	return 0;
 }

