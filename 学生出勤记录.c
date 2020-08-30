#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int n,k;
	int i,j,flag=0;
	int c=0;
	gets(a);
	n = strlen(a);
	for(i=0;i<n;i++){
		if(a[i] == 'A'){
			c++;
		}
	}	
	if(c>1){
		printf("false");
		flag = 1;
	}
	
	for(i=0;i<n;i++){
		if(a[i]=='L'){
			for(j=i;j<n;j++){
				if(a[j]==a[i]){
					k++;
				}
			}
			if(k<=2){
				k=0;
			}
			if(k>2&&flag!=1){
				flag=2;
				printf("false");
				break;
			}
		}
	}
	
	if(flag==0){
		printf("true");
	}
	
	return 0;
 }

