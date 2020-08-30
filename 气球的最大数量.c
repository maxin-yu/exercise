#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	int c=0,l=0,k=0,h=0,p=0;
	char str[1000];
	int a[1000];
	int max;
	gets(str);
	n = strlen(str);
	for(i=0;i<n;i++){
		if(str[i] == 'b')
			c++;
		if(str[i]=='a')
			l++;
		if(str[i]=='l')
			k++;
		if(str[i]=='o')
			h++;
		if(str[i]==n)
			p++;
	} 
	k=k/2;h=h/2;
	a[0] = c;
	a[1] = l;
	a[2] = k;
	a[3] = h;
	a[5] = p;
	max=  a[0];
	for(i=0;i<5;i++){
		if(a[i]<max){
			max = a[i];
		}
	}	
	
	printf("%d",max);
	
	
	return 0;
 }

