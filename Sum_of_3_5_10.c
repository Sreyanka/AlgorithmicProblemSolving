#include<stdio.h>
#include<string.h>

int main()
{
    int i,ws,j;
    int arr[16];
    memset(arr,0,sizeof(arr));
    ws=3;
    arr[0]=1;
    for(i=0,j=0;i<=15;i++)
    {
        if(ws+i<=15)
            arr[ws+i]=arr[j++]+arr[ws+i];



    }
    ws=5;
    for(i=0,j=0;i<=15;i++)
    {
        if(ws+i<=15)
            arr[ws+i]=arr[j++]+arr[ws+i];



    }
    ws=10;
    for(i=0,j=0;i<=15;i++)
    {
        if(ws+i<=15)
          arr[ws+i]=arr[j++]+arr[ws+i];



    }
    for(i=0;i<=15;i++)
    {

        printf("%d ",arr[i]);
    }
    return 0;
}
