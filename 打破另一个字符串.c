#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000];
	int n,i,j,m=0;
	char t;
	int c=0;
	gets(a);
	gets(b);
	n = strlen(a);
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]<a[j+1]){
				 t = a[j];
				 a[j] = a[j+1];
				 a[j+1] = t;
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(b[j]<b[j+1]){
				 t = b[j];
				 b[j] = b[j+1];
				 b[j+1] = t;
			}
		}
	}
	

	for(i=0;i<n;i++){
		if(a[i]>=b[i]){
			c++;
		}
		 if(a[i]<=b[i]){
			m++;
		}
	}
	if(c==n||m==n)	{
		printf("true");
	}
	else{
		printf("false");
	}

	return 0;
 }

