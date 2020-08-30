
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000],a[1000];
	int i,j=0;
	gets(str);
	int len;
	len = strlen(str);
	for(i=len-1;i>=0;i--){
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		{a[j] = str[i];
		j++;}
	}
	
	j=0;
	for(i=0;i<len;i++){
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
			str[i] = a[j];
			j++;
		}
	}
	
	puts(str);
	
	return 0;
 }

