#include <stdio.h>
void main()
{
    int i,j,k,l,m,o,p,n,z,y;
    scanf("%d",&z);
    for(i=1;i<=z;i++)
    {
        for(j=1;j<(z-i)+1;j++)
        {
            printf("  ");
        }
        for(k=i;k>=1;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    for(m=1;m<z;m++)
    {
        for(n=1;n<=m;n++)
        {
            printf("  ");
        }
        for(o=z-m;o>=1;o--)
        {
            printf("%d ",o);
        }
        printf("\n");
    }

}
