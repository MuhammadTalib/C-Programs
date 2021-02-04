#include <stdio.h>
void main()
{
    int k,n,d,m,i,j,q;
    scanf("%d",&n);
    j=n;
    for(k=1;n>=1;k++)
    {
        d=n%10;
        n=n/10;
        printf("%d\n",d);
    }
    int arr[k] ;
    for(i=1;j>=1;i++)
    {
        d=j%10;
        j=j/10;
        arr[m]=d;
        printf("%d\n",arr[m]);

    }



}
