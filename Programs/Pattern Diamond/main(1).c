#include <stdio.h>
void main()
{
    int i,j,k,l,m,o,p,n,z,y;
    scanf("%d",&z);
    scanf("%d",&y);
    for(i=1;i<=z;i++)
    {
        for(j=1;j<(z-i)+1;j++)
        {
            printf("  ");
        }
        for(k=i;k>=y;k--)
        {
            printf("%d ",k);
        }
        for(l=y+1;l<=i;l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
    for(m=1;m<z;m++)
    {
        for(n=1;n<=m;n++)
        {
            printf("  ");
        }
        for(o=z-m;o>=y;o--)
        {
            printf("%d ",o);
        }
        for(p=y+1;p<=z-m;p++)
        {
                printf("%d ",p);
        }
            printf("\n");
    }



}
