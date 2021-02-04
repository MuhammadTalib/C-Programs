#include <stdio.h>
void main()
{
    int n,d1,d2,d3,d4;
    printf("Enter 5 digit number:");
    scanf("%d",&n)
    d1=n/10000;
    n=n%10000;
    d2=n/1000;
    n=n%1000;
    d3=n/100;
    n=n%100;
    d4=n/10;
    n=n%10;
    d1++;
    d2++;
    d3++;
    d4++;
    n++;
    printf("%d%d%d%d%d",d1,d2,d3,d4,n);


}
