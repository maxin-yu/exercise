#include<stdio.h>
int main()
{
	int n,i,j=0,k=0,m=0,l=0,h,d;
	int t,sum = 0;
	int a[10000],b[10000],c[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i]%3==0){
			b[j] = a[i];
			j++;
			continue;
		}
		if(a[i]%3==2){
			c[k] = a[i];
			k++;
			m++;
			continue;
		}
		if(a[i]%3==1){
			c[k] = a[i];
			k++;
			l++; 
			continue;
		}
	}
	for(i=0;i<k;i++){
		for(h=0;h<k-1;h++){
			if(c[h]>c[h+1]){
				d=c[h];
				c[h] = c[h+1];
				c[h+1] = d;
			}
		}
	}
	t = l -m;
	if(t>0){
		for(i=0;i<k;i++){
			if(c[i]%3==1){
				c[i]=0;
				t--;
			}
			if(t<=0)  break;
		}
	}
	else if(t<0){
		for(i=0;i<k;i++){
			if(c[i]%3==2){
				c[i]=0;
				t++;
			}
			if(t>=0)  break;
		}
	}
	
	for(i=0;i<j;i++){
		if(b[i]%3==0){
			sum = sum + b[i];
		}
	}
		for(h=0;h<k;h++){
			if(c[h]!=0){
				sum = sum + c[h];
			}
		}
		
	printf("%d",sum);
	
	return 0;
}

