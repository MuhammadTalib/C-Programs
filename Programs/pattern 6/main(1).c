#include <stdio.h>
void main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i)+1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
