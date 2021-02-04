#include <stdio.h>
void main()
{
    int n,d;
    printf("Enter any number:");
    scanf("%d",&n);
    while(n>=1)
    {
        d=n%10;
        n=n/10;
        printf("%d\n",d);
    }


}

