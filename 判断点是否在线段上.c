 
#include<stdio.h>
int main()
{
	double a,b,x1,x2,y1,y2;
	scanf("%lf%lf",&a,&b);
	scanf("%lf%lf",&x1,&y1);	
	scanf("%lf%lf",&x2,&y2);
	double s1,s2,t1,t2;
	s1=a-x1; t1 = b-y1;
	s2=x1-x2; t2 = y1-y2;
	if(s1*t2-s2*t1==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	
	return 0;
}

