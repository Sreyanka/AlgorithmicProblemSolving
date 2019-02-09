#include <stdio.h>

int main(void) {
	// your code goes here

	long long int T,N,A,B,K;
	scanf("%lld",&T);
	long long int i,j,count;
	for(i=0;i<T;i++)
	{
	    count=0;
	    scanf("%lld %lld %lld %lld",&N,&A,&B,&K);
	    for(j=1;j<=N;j++)
	    {
	        if(j%A==0||j%B==0)
	        {
	            if(j%A==0)
	                count++;
	            else if(j%B==0)
	                count++;
	           else if(j%A==0&&j%B==0)
	                count=count-2;
	        }
	        if(count==K)
	            break;
	    }
	    if(count>=K)
	        printf("Win\n");
	   else
	        printf("Lose\n");
	}
	return 0;
}

