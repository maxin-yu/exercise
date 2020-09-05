#include<stdio.h>
#include<string.h>
int main()
{
	int len,n,i,j,sum=0,k=0;
	char str[1000];
	int a[1000],s[1000];
	gets(str);
	len = strlen(str);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			sum = sum+a[j];
		}
		s[k] = sum;
		k++;
		sum = 0;
	}
	
	for(i=0;i<n;i++){
		str[i] = str[i] + s[i];
	}
	puts(str);
	
	return 0;
 }

