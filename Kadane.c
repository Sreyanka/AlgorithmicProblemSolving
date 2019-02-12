#include<stdio.h>
#include<string.h>

int main()
{
   int i,j;
   int tmax=0,max=0;
   int N;
   scanf("%d",&N);
   int a[N];
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {

    tmax=tmax+a[i];
    if(tmax<0)
        tmax=0;
    else if(max<tmax)
        max=tmax;
   }
   printf("%d\n",max);
   return 0;
}
