#include <stdio.h>
int primefactor(int n);
main()
{
    int n,i,l,m;
    scanf("%d",&n);
    m=n;
    for(l=2;l<=m;l++)
    {
        if(n%l==0)
        {
            n=n/l;
            printf("%d ",l);
            continue;
        }
    }
}

