#include <stdio.h>
void main()
{
    int y,n,m=0,year;
    printf("From ");
    scanf("%d",&n);
    printf("to ");
    scanf("%d",&y);
    for(year=n;year<=y;year++)
    {
        if(((year%4==0)&&(year%100!=0))||(year%400==0))
        {
            m++;
        }
    }
    printf("%d",m);
}
