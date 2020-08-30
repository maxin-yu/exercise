 
#include<stdio.h>
int main()
{
	double n;
	int m;
	double s=1;
	scanf("%lf%d",&n,&m);
	int i;
	int t;
	t=m;
	if(m<0){
		m = -m;
	}
	for(i=0;i<m;i++){
		s = 1.0*s*n;
	}
	if(t<0){
		s=1.0/s;
		printf("%.5f",s);
	}
	if(t>=0){
		printf("%.5f",s);
	}
	return 0;
 }

