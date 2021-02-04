#include <stdio.h>
void main()
{
    int n,i,j,k;
    scanf("%d",&n);
    /*11111
      2222
      333
      44
      5*/
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(n>9)
            {
                if(i<=9)
                {
                    printf("0");
                }

            }
            printf("%d ",i);
        }
        printf("\n");


    }

}
