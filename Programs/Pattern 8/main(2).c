#include <stdio.h>
void main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }
    for(l=1;l<=n;l++)
    {
         for(k=1;k<=n-l;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }




}
