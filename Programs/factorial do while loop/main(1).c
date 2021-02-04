#include <stdio.h>
void main()
{

    int n,i=1,f;
    scanf("%d",&n);
    f=n-1;
    do
    {
        n=n*i;
        i++;
    }
    while(i<=f);
    printf("%d",n);
}
