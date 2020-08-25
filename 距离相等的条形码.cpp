#include<stdio.h>
int main()
{
	int n;
	int i,j,t;
	int c=0;
	int b[1000],a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(b[j]>b[j+1]){
				t = a[j];
				b[j+1] = b[j];
				b[j] = t; 
			}
		}
	}
	
	
	j=0;
	for(i=0;i<n;i++){
		a[j] = b[i];
		j=j+2;
		c++;
		if(j+2>n)
			break;
	} 
	
	j=1;
	for(i=c;i<n;i++){
		a[j] = b[i];
		j=j+2;
	}
	
	for(i=0;i<n;i++){
		printf("%4d",a[i]);
	}
	return 0;
 } 

