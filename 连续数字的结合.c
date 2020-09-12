#include<stdio.h>
int main(void){
	int a[1000],n,i,j,k,c=1;
	int m=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	  for(i=0;i<n;i++){
	  	if(a[i]!=0){
	  		c=1;
	  		a[i] = a[i]+1;
	    for(j=i+1;j<n;j++){
	    	if(a[j] == a[i]){
	    		c++;
	    		a[j]=0;
	    		a[i] = a[i]+1;
			}
			if(c==k) 
			{
				m++;
			break; 
			}
		}
	  }
	  }
	  
	  if(m*k==n){
	  	printf("true");
	  }
	  else{
	  	printf("false");
	  }
	  return 0;
}

