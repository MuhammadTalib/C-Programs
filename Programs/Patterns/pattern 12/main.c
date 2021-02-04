#include <stdio.h>
void main()
{
    int n,i,j,k;
    scanf("%d",&n);
    /*13579
      3579
      579
      79
      9
      */
    for(i=1;i<n*2;)
    {
        for(j=i;j<n*2;)
        {
            printf("%d ",j);
            j=j+2;
        }
        printf("\n");
        i=i+2;
    }

}
