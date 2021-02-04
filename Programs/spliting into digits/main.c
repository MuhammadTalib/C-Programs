#include <stdio.h>
int pow(int m,int p);
void main()
{
    int n,i,l,d,o;
    scanf("%d",&n);
    l=n;
    for(i=0;n>0;i++)
    {
        n=n/10;
    }
    printf("%d",i);
    i--;
    while(l>0)
    {
        o=10;
        d=l/pow(o,i);
        l=l%pow(o,i);
        i--;
        printf("%d",d);
    }


}
int pow(int m,int p)
{
    int i,r;
    r=m;
    for(i=1;i<p;i++)
    {
        m=m*r;
    }
    return m;
}
