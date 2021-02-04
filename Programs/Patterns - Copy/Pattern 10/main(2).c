#include <stdio.h>
void main()
{
    int n,i,j,k;
    /*12345
      4321
      123
      21
      1*/
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if((i%2)!=0)
            {for(j=1;j<=(n-i)+1;j++)
            {
            printf("%d",j);
            }}
        else
            {for(k=(n-i)+1;k>0;k--)
            {
                printf("%d",k);
            }}
            printf("\n");
    }
}
