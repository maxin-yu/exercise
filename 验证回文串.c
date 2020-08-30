  
#include<stdio.h>
#include<string.h>
int main(void){
	int i,j,n,flag=0;
	char str[1000],s[10000];
		gets(str);
	n = strlen(str);
	
	j=0;
	for(i=0;i<n;i++){
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]>='0'&&str[i]<='9'){
			if(str[i]>='A'&&str[i]<='Z'){
			str[i] = str[i] + 32;
			s[j] = str[i];
			j++;
	    	}
	    else if(str[i]>='a'&&str[i]<='z'){
	    		s[j] = str[i];
	    		j++;
			}
		}
	}
	n = strlen(s);
	j=n-1;
	for(i=0;i<n/2;i++){
		if(s[i]==s[j]){
			j--;
		}
		else{
			flag=1;
			printf("false");
			break;
		}
	}
	
	if(flag==0){
		printf("true");
	}
	return 0;
}

