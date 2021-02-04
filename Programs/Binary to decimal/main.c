#include <stdio.h>
long unsigned int pow(long unsigned int,long unsigned int);
void main()
{
    long unsigned int m,l,b,d=0,n,j,i;
    printf("How many bit are:");
    scanf("%lu",&n);

    long unsigned int arr[n];
    printf("Enter %d bit Binary Number:",n);
    scanf("%lu",&b);

    for(i=0;b>0;i++)
    {
        m=b%10;
        b=b/10;
        arr[i]=m;
        printf("%lu",arr[i]);
    }
    arr[n-1]=b;
    printf("%lu",arr[n-1]);

    for(j=0;j<n;j++)
    {
        d=d+(arr[j]*pow(2,j));
    }
    printf("The decimal representation of the binary is:");
    printf("%lu\n\n\n\n\n",d);


}
long unsigned int pow(long unsigned int c,long unsigned int p)
{
    long unsigned int r=c,i;
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

