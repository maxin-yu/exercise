 
#include<stdio.h>
#include<string.h> 
int main(void){
	int c=0,i,j,n,m=0;
	char str[1000];
	gets(str);
	n = strlen(str);
	for(i=0;i<n;i++){
		if(str[i]!=' '){
			c++;
		}
		else if(str[i] == ' '){
			for(j=c-1;j>=m;j--){
				printf("%c",str[j]); 
			}
			c++;
			m = c;
			printf(" ");
		}
	}
	
	for(j=n-1;j>=0;j--){
		if(str[j]!=' '){
			printf("%c",str[j]);
		}
		if(str[j]==' '){
			break;
		}
	}
	
	return 0;
}

