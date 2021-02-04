#include <stdio.h>
void main()
{
    int n,i,j;
    /*
    54321
    4321
    321
    21
    1*/
    printf("From Where to start:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            if(j<=9)
            {
                printf(" ");
            }
            printf("%d ",j);
        }
        printf("\n");
    }
}
