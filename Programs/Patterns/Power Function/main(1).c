#include <stdio.h>
int power(int n,int p);
void main()
{
    int n,p;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("Enter Exponent:");
    scanf("%d",&p);
    printf("Power Of Number Is:%d\n",power(n,p));

}
int power(int n,int p)
{
    int r=n,i;
    for(i=1;i<p;i++)
    {
        n=n*r;
    }
    return n;
}
