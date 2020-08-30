 
#include<stdio.h>
int main()
{
	double x1,x2,x3,x4,y1,y2,y3,y4;
	double k1,k2;
	k1 = (y1-y2)/(x1-x2);
	k2 = (y3-y4)/(x3-x4);
	if(k1==k2){
		printf("不相交");
	}
	else{
		printf("相交"); 
	}
	
	return 0;
 }

