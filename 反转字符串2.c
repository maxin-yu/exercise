 
#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000], str[1000];
	char t;
	int i,k,j=0;
	gets(str);
	scanf("%d",&k);
	for(i=3*k-1;i>2*k-1;i--){
		a[j] = str[i];
		j++;
	}
	
	j=0;
	for(i=2*k;i<3*k;i++){
		str[i] = a[j];
		j++;
	}	
	
	puts(str);
	
	return 0;
 }

