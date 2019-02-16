#include<stdio.h>
#include<stdlib.h>
#include<Math.h>
int subset_sum(int set[],int set_size,int val);
int subset_sum(int set[],int set_size,int val)
{
    int cnt=0;
    int sum=0;
    int x;
    int k;
    int P=pow(2,set_size);
    for(x=0;x<P;x++)
    {
        int sum=0;
        for(k=0;k<set_size;k++)
        {

            if(x&(1<<k))
            {
                sum=sum+(set[k]);

            }
        }
        if(sum>=val)
        {
            cnt++;
        }

    }
    return cnt;
}

int main()
{
    int set[]={3,5,2};
    int set_size=3;
    int val=5;
    int count=subset_sum(set,set_size,val);
    printf("%d\n",count);
    return 0;
}
