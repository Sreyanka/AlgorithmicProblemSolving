#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
int assign(int cost[3][3],int N);
int count_set_bits(int mask);
int min(int x,int y);


int min(int x,int y)
{
    if(x>y)
        return y;
    else
        return x;

}


int count_set_bits(int mask)
{
    int cnt=0,i;
for(i=0;i<3;i++)
{
    if(mask&(1<<i))
        cnt++;

}
//printf("%d\n",cnt);
return cnt;
}
int assign(int cost[3][3],int N)
{
int set_size=pow(2,N);
int dp[set_size],x,i,j,mask;
dp[0]=0;
for(i=1;i<set_size;i++)
{

    dp[i]=INT_MAX;

}
//printf("%d",dp[set_size-1]);
for(mask=0;mask<set_size;mask++)
{

    x=count_set_bits(mask);
    for(j=0;j<N;j++)
    {

        if((mask&(1<<j))==0)
            dp[mask|(1<<j)]=min(dp[mask|(1<<j)],dp[mask]+cost[x][j]);
    }

}
return dp[set_size-1];
}


int main()
{

    int cost[3][3]={{8,2,5},{3,2,5},{4,1,2}};
    int N=3,i,j;




        printf("%d\n",assign(cost,N));

    return 0;
}
