#include <stdio.h>
void main()
{

    int n,i,f;
    scanf("%d",&n);
    f=n-1;
    for(i=1;i<=f;i++)
    {
        n=n*i;
    }

    printf("%d",n);

}
