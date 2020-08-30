#include<stdio.h>
#include<string.h>
int main()
{
	int k,n;
	char s[1000];
	int c=0,i,j,l=0;
	int a[1000];
	gets(s);
	scanf("%d",&k);
	n = strlen(s);
	for(i=0;i<n-k;i++){
		for(j=i;j<i+k;j++){
			if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='u'||s[j]=='o')
				c++;
		}
		a[l] = c;
		l++;
		c=0;
	} 
	
	int max;
	max = a[0];
	for(i=0;i<l;i++){
		if(a[i]>max){
			max  = a[i];
		}
	}
	
	printf("%d",max);
	return 0;
 }

