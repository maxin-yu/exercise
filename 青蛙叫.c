 #include<stdio.h>
 #include<string.h>
 int main(void){
 	int i,j,n,c=0,r=0,o=0,a=0,k=0,s;
 	int flag=0;
 	char str[1000];
 	gets(str);
 	n=strlen(str);
 	if(n%5!=0)
 	  printf("-1");
 	if(n%5==0){
	 for(i=0;i<n;i++){
	 	s = (i+1)%5;
	 	switch(s){
	 		case 1:if(str[i]=='c') c++;else flag=1;break;
	 		case 2:if(str[i]=='r') r++;else flag=1;break;
	 		case 3:if(str[i]=='o') o++;else flag=1;break;
	 		case 4:if(str[i]=='a') a++;else flag=1;break;
			case 0:if(str[i]=='k') k++;else flag=1;break;
		 }
		 if(flag==1) break;
	 }
	 if(flag==0){
	 	printf("%d",c/2);
	 } 
	 else{
	 	c=0;r=0;o=0;a=0;k=0;
	 	for(i=0;i<n;i++){
	 		if(str[i]=='c') c++;
	 		if(str[i]=='r') r++;
	 		if(str[i]=='o') o++;
	 		if(str[i]=='a') a++;
	 		if(str[i]=='k') k++;
		 }
		 if(c==r&&r==o&&o==a&&a==k){
		 	printf("%d",c);
		 }
		 else{
		 	printf("-1");
		 }
	 }
 }
}

