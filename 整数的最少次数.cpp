#include<stdio.h>
int main()
{
	int n,k,t;
	int i,j;
	int c=1;
	int l=0;
	int sum = 0;
	int a[1000],b[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i]!=-1){
		for(j=i+1;j<n;j++){
			if(a[j]==a[i]){
				c++;
				a[j] = -1;
			}		
		}
			b[l] = c;
			c=1;
			l++;
	  }
	}
	
	for(i=0;i<l;i++){
		for(j=0;j<l-1;j++){
			if(b[j]>b[j+1]){
				t=b[j];
				b[j] = b[j+1];
				b[j+1] = t;
			}
		}
	}
	
	
	for(i=0;i<l;i++){
		sum = sum+b[i];
		if(sum>k){
			printf("%d",l-i);
			break;
		}
		else if(sum==k){
			printf("%d",l-i-1);
			break;
		}
	}	
	
	return 0;
} 

