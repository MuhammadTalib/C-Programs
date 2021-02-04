#include <stdio.h>
void main()
{
    int n,d,g,o,j,l,i,h,y,k;
    printf("Enter any number:");
    scanf("%d",&n);
    l=n;
    for(i=0;n>=1;i++)
    {
        d=n%10;
        n=n/10;

    }
    int arr[i];
    for(y=i-1;l>=1;y--)
    {
        g=l%10;
        l=l/10;
        arr[y]=g;

    }
    for(k=0;k<=i-1;k++)
    {
        printf("%d\n",arr[k]);
    }
    }
