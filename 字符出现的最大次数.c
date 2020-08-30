  
#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,j,n,k=0,c=0,a[1000];
	char str[1000];
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(str[i]==str[j]){
			c++;
	}
	}
	a[k] = c;
	c=0;
	k++;
	}
	int max; 
	max = a[0];
	for(i=0;i<k;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	printf("%d",max);
	return 0; 
 }

