#include <stdio.h>
int factorial(int f);
main()
{
    int j,k,pas,a,l,n;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        for(l=1;l<n-j;l++)
        {
            printf(" ");
        }
        for(k=0;k<=j;k++)
        {

            a=j-k;
            pas=(factorial(j))/(factorial(a)*factorial(k));
            printf("%d ",pas);
        }
        printf("\n");

    }

}
int factorial(int f)
{
    int i=1;
    if(f==0)
    {
        i=1;
    }
    else
    {
        for(;f>0;f--)
        {
            i=i*f;
        }
    }
        return i;
}
