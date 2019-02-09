#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j;
    char str1[50] = "anup";
    char str2[50] = "anoop";
    int len1=strlen(str1);
    int len2=strlen(str2);
    int arr[len1+1][len2+1];

   for(i = 0 ; i <=len2; i++)
        arr[0][i] = 0;


    for(i = 0; i <= len1; i++)
        arr[i][0]=0;

    for(i=1;i<=len1;i++)
    {
        for(j=1;j<=len2;j++)
        {
            if(str1[i-1]==str2[j-1])
                arr[i][j]=arr[i-1][j-1]+1;
            else
            {
                if(arr[i][j-1]>=arr[i-1][j])
                    arr[i][j]=arr[i][j-1];
                else
                    arr[i][j]=arr[i-1][j];
            }
        }

    }
    for(i=0;i<=len1;i++)
    {
        for(j=0;j<=len2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

 return 0;
}
