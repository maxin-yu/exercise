
#include <stdio.h>
int main(){
    int A[]={-1, 2, 5, 3, 78, 54, 67, 89,23,9};//从1开始存入数据
    int i,L=1,R=9,start,end,temp,parent,child,k;
    printf("Previous Arrary:");
    for( i=1;i<=9;++i)
        printf(" %d",A[i]);
   
   
    for(i=(R-L+1)/2;i>=L;--i)//调整整个二叉树为最大堆
    {
    	start = i;
    	end = R;
    	temp=A[start];
    	parent=start;
    	while(2*parent<=end)
    	{
        	child=2*parent;
        	if(child!=end&&A[child]<A[child+1])++child;
        	if(temp>A[child])break;
        	else {
        		k = A[parent];
        		A[parent]=A[child];
				A[child] = k;	
			}
				
        	parent=child;
    }
   			 A[parent]=temp;
	}
	
	
			int a,b,t;
  		 for(i=R;i>=L;--i)
   		 {
	     	t=A[L];
		    A[L]=A[i];
		    A[i]=t;
	        start = L;
	        R = i-1;
	        end= R;
	        temp=A[start];
		   	parent=start;
		   	while(2*parent<=end)
		    {
		        child=2*parent;
		        if(child!=end&&A[child]<A[child+1])++child;
		        if(temp>A[child])break;
		        else{
		        		k = A[parent];
		        		A[parent]=A[child];
						A[child] = k;	
					}
					parent = child;
	    }
	   			A[parent]=temp;
	    }
	    
		
	
			
			printf("\nSorted Arrary:");
		    for(i=9;i>=1;--i)
		        printf(" %d",A[i]);
		    printf("\n");
   
      
    return 0;
}

