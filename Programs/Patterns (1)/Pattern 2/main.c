#include <stdio.h>
void main()
{
    int n,i,j;
    /*54321
      5432
      543
      54
      5*/
    printf("From Where To Start:");
    scanf("%d",&n);
    int k=1;
    for(i=n;i>0;i--)
    {
        for(j=n;j>=k;j--)
        {
            if(n>9)
            {if(j<=9)
            {
                printf(" ");
            }}
            printf("%d ",j);
        }
        printf("\n");
        k++;
    }

}
