
//最长上升子序列
//法1：动态规划 
#include<stdio.h>
int max1(int n,int m );
int main()
{
	int i,j,n;
	int a[1000],c[1000];
	int max;
    scanf("%d", &n);
    for( i=1; i<=n; i++) 
    {
        scanf("%d", &a[i]);
        c[i] = 1;
    }
    for( i=1; i<=n; i++)
        for(j=1; j<i; j++)
            if(a[j] < a[i])
				c[i] = max1(c[i],c[j]);
				     
			max = c[1];    
    for(i=1; i<=n; i++)
		if(c[i]>max)
			max = c[i];

    printf("%d\n",max);
    return 0;
}
int max1(int n,int m ){
	int max;
		if(n>=m+1)
           	max = n;
		else
			max = m+1;
		return max;
}


//法2 二维查找优化 
//#include<stdio.h>
//int main()
//{
//	int a[1000],l[1000];
//	int n,i,j,s,t;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		scanf("%d",&a[i]);
//		l[i] = -1;
//	}
//	 l[1] = a[1];
//	 t = 1;
//	 s=t;
//	 for(i=2;i<=n;i++){
//	 	if(a[i]>l[t]){
//	 		l[++s] = a[i];
//		 }
//		 else{
//		 	int L = 1,mid;
//				while(L<=t){
//					mid = (L+t)/2;
//					if(a[mid]<=a[i])
//						L = mid + 1;
//					else
//		 				t = mid - 1;
//					}
//		 	l[L] = a[i];
//		 }
//		 t=s;
//	 }
//	
//	printf("%d",t);
//	return 0;
//}

