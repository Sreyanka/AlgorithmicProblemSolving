#include<stdio.h>
#include<string.h>

int main()
{
   int i,j;
   int N=6,K=3;
   int C[N][K];
   memset(C,0,sizeof(C));
   for(i=0;i<=N;i++)
   {

       for(j=0;j<=i&&j<=K;j++)
       {
           //printf("\t");

           if(j==0||i==j)
           {

               C[i][j]=1;
               //printf("\t");

           }
           else
           {

               C[i][j]=C[i-1][j-1]+C[i-1][j];
           }
           printf("%d\t",C[i][j]);
       }
       printf("\n");
   }

}
