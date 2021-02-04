#include <stdio.h>
void main()
{
    int n,i,j,k;
/*  5
    4 4
    3 3 3
    2 2 2 2
    1 1 1 1 1
*/
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<(n-i)+1;j++)
        {

            printf("%d ",i);
             if(i<=9)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
