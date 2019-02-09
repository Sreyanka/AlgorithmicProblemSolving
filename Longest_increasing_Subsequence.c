#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int i,j;
int N;
N=6;
int b[N];
int a[]={5,11,3,15,30,25};
for(i=0;i<N;i++)
{
b[i]=1;
}

int max=0;
for(i=1;i<N;i++)
{
    for(j=0;j<i;j++)
    {
        if(a[j]<a[i]&& b[i]<b[j]+1)
        {

            b[i]=b[j]+1;
            if(max<b[i])
                max=b[i];
        }

    }
}
printf("%d\n",max);
}
