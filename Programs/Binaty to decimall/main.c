#include <stdio.h>
 int pow(int,int);
void main()
{
    int i,j,k,l,n,d=0;
    printf("ENTER number of bits:");
    scanf("%d",&n);
    int arr[n];
    l=n-1;
    printf("Now Enter bits:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        d=d+(arr[i]*pow(2,l));
        l--;
    }
    printf("%d",d);
}
int pow(int c,int p)
{
    int r=c,i;
    if(p==0)
    {
        c=1;
    }
    else
    {   for(i=1;i<p;i++)
        {
            c=c*r;
        }
    }
    return c;

}
