#include <stdio.h>
void main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    /*1
      01
      101
      0101*/
    for(i=1;i<=n;i++)
    {
        l=i;
        for(j=1;j<=i;j++)
        {
            k=l%2;
            printf("%d ",k);
            l++;

        }
        printf("\n");
    }

}
