#include <stdio.h>
int factorial(int f);
main()
{
    int n,fact;
    scanf("%d",&n);
    fact=factorial(n);
    printf("%d",fact);

}
int factorial(int f)
{
    int i=1;
    for(;f>0;f--)
    {
        i=i*f;
    }
    return i;
}
