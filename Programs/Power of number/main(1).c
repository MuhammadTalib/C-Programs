#include <stdio.h>
void main()
{
    int p,n,s,i=2;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("Enter Power:");
    scanf("%d",&p);
    s=n;
    while(i<=p)
    {
        i++;
        n=n*s;
    }
    printf("%d",n);
}
