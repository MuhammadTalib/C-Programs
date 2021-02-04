#include <stdio.h>
void main()
{
    int n,i,j,k;
    scanf("%d",&n);
/*
1
22
333
4444
55555
*/
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i<=9)
            {
                printf(" ");
            }
            printf("%d ",i);
        }
        printf("\n");
    }

}
