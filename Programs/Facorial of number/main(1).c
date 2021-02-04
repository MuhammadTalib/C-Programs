#include <stdio.h>
void main()
{

    int n,i=1,f;
    scanf("%d",&n);
    f=n-1;
    while(i<=f)
    {
        n=n*i;
        i++;
    }
    printf("%d",n);
}
