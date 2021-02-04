#include <stdio.h>
void main()
{
    int n,d1,d2,d3,d4,d5;
    printf("Enter a 5 digit number:");
    scanf("%d",&n);
    d1=n/10000;
    d2=(n%10000)/1000;
    d3=(n%1000)/100;
    d4=(n%100)/10;
    d5=(n%10)/1;
    printf("The Reverse of the number is:");
    printf("%d%d%d%d%d\n",d5,d4,d3,d2,d1);
    if((d1==d5)&&(d2==d4))
    {
        printf("Original & Reverse Number are equal");
    }
    else
    {
        printf("Original & Reverse Number are not equal");

    }
}
