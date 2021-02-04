#include <stdio.h>
void main()
{
    int n,d,num;
    printf("Enter a number:");
    scanf("%d",&n);
    while(num>0)
    {
        d=n%10;
        num=num/10;
        printf("The Reverse of the number is:");
        printf("%d",d);
        }


}
