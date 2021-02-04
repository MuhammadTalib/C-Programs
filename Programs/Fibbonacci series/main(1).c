#include <stdio.h>
void main()
{
    int n,i,j,k;
    printf("How many number do you want to see in Fibonacci series:");
    scanf("%d",&n);
    int num[n];
    num[0]=0;
    num[1]=1;
    printf("%d %d ",num[0],num[1]);
    for(i=2;i<n;i++)
    {
        num[i]=num[i-1]+num[i-2];
        printf("%d ",num[i]);
    }



}
