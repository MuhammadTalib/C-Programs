#include <stdio.h>
void main()
{
    int n,i,j,k;
    scanf("%d",&n);
/*55555
  4444
  333
  22
  1*/
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(n>9)
            {if(i<=9)
            {
                printf("0");
            }}
            printf("%d ",i);
        }
        printf("\n");

    }

}
