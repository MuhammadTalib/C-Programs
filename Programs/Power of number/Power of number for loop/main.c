#include <stdio.h>
void main()
{
    int n,p,i,s;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("Enter Power:");
    scanf("%d",&p);
    s=n;
    for(i=2;i<=p;i++)
    {
        n=n*s;
    }
    printf("%d",n);
}
