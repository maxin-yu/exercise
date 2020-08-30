 
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b;
	double x1,x2,y1,y2;
	double k1,k2;
	int i;
	int n,m;
	scanf("%lf%lf",&a,&b);
	scanf("%lf%lf%lf%lf",&x1,&x2,&y1,&y2);
	k1 = (y1-y2)/(x1-x2);
	m=k1*(n-x1)+y1;
	k2 = (b-m)/(a-n);
	for(i=x1;i<=x2;i++){
		if(k2*k1==-1){
			printf("%f %f",&n,&m);
			break;
		}
	}
	
	return 0;
 }

