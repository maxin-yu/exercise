#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char str[1000];
	gets(str);
	n = strlen(str);
	for(i=0;i<n;i++){
		if(str[i]=='a') printf(".-");
		if(str[i]=='b') printf("-...");
		if(str[i]=='c') printf("-.-.");
		if(str[i]=='d') printf("-..");
		if(str[i]=='e') printf(".");
		if(str[i]=='f') printf("..-.");
		if(str[i]=='g') printf("--.");
		if(str[i]=='h') printf("....");
		if(str[i]=='i') printf("..");		
		if(str[i]=='j') printf(".---");
		if(str[i]=='k') printf("-.-");
		if(str[i]=='l') printf(".-..");
		if(str[i]=='m') printf("--");
		if(str[i]=='n') printf("-.");
		if(str[i]=='o') printf("---");
		if(str[i]=='p') printf(".--.");
		if(str[i]=='q') printf("--.-");
		if(str[i]=='r') printf(".-.");
		if(str[i]=='s') printf("...");
		if(str[i]=='t') printf("-");
		if(str[i]=='u') printf("..-");
		if(str[i]=='v') printf("...-");
		if(str[i]=='w') printf(".--");
		if(str[i]=='x') printf("-..-");
		if(str[i]=='y') printf("-.--");
		if(str[i]=='z') printf("--..");																																						
	}
	
	
	return 0;
 }

