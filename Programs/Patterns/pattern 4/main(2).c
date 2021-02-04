#include <stdio.h>
void main()
{
    int n,i,j,k;
    /*1
      21
      321
      4321
      54321*/
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=i;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

}
