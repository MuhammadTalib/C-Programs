#include <stdio.h>
void main()
{
    int i,j,k,l,m,n,o,p,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=(x-i)+1;j+=1)
        {
                printf("%d",j);

        }
        for(k=1;k<i;k++)
        {
                printf("  ");
        }
        for(l=(x-i)+1;l>=1;l--)
        {
                printf("%d",l);
        }
        printf("\n");
    }
    for(m=1;m<=x;m++)
    {
        for(n=1;n<=m;n++)
        {
            printf("%d",n);
        }


    for(o=x;o>m;o--)
    {
        printf("  ");
    }
    for(p=m;p>=1;p--)
    {
        printf("%d",p);
    }
    printf("\n");

    }



}
