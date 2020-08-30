#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000],str2[1000];
	int i,j,k=0;
	int a[10000];
	int c=0;
	int len;
	gets(str);
	for(i=0;i<len;i++){
		str2[i] = str[i];
	}
	len = strlen(str);
	for(i=0;i<len;i++){
		if(str[i]>='a'&&str[i]<='z'){
			c=1;
		for(j=i+1;j<len;j++){
			if(str[i] == str[j]){
				str[j] = str[j] - 32;
				c++; 
			}
			else if(str[i] != str[j]){
			
				break;
			}
		}
		a[k] = c;
		k++;
	}
}
	
	if(k+k>=len){
		for(i=0;i<len;i++){
			printf("%c",str2[i]);
		}
	}
	
	else if(k+k<len){
		j=0;
		for(i=0;i<len;i++){
			if(str[i]<='z'&&str[i]>='a'){
			printf("%c",str[i]);
			printf("%d",a[j]);
			j++;
		}
		}
	}
	
	return 0;
 }
