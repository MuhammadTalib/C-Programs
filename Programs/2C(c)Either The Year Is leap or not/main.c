#include <stdio.h>
void main()
{
    int year;
    printf("Enter Year To check its Either Leap or not:");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not A leap year");
    }
}
