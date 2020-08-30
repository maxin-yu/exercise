  
#include<stdio.h>
#include<string.h>
int main()
{
	char q[1000],w[1000];
	int i,j;
	int c=0;
	char min;
	gets(q);
	gets(w);
	int len1,len2;
	len1 = strlen(q);
	len2 = strlen(w);
	min = q[0];
	for(i=0;i<len1-1;i++){
		if(q[i+1]<q[i]){
			min = q[i+1];
		}
	}
	for(i=0;i<len1;i++){
		if(q[i]==min){
			c++;
		}
	}
	
	len1 = c;
	
	c=0;
	min = w[0];
	for(i=0;i<len2-1;i++){
		if(w[i+1]<w[i]){
			min = w[i+1];
		}
	}
	for(i=0;i<len2;i++){
		if(w[i] == min){
			c++;
		}
	}
	
	len2 = c;
	
	if(len1>len2){
		printf("%d",len2);
	}
	else{
		printf("%d",len1);
	}
	return 0;
	
 }

