#include <stdio.h>
void main()
{
    int n,i,j,k;
    /*5
      45
      345
      2345
      12345*/
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j<=n;j++)
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
