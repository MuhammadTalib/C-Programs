#include <stdio.h>
int georgian(int y);
void main()
{
    int y,n,m=0,year,day;
    scanf("%d",&y);
    georgian(y);
}
int georgian(int y)

{
    int n,m=0,year,day;
    for(year=1900;year<=y;year++)
    {
        if(((year%4==0)&&(year%100!=0))||(year%400==0))
        {
            m++;
        }
    }
    day=(((y-1900+1)*365)+m)%7;
    if(day==1)
        printf("Monday");
    else if(day==2)
        printf("Tuesday");
    else if(day==3)
        printf("Wednesday");
    else if(day==4)
        printf("Thursday");
    else if(day==5)
        printf("Friday");
    else if(day==6)
        printf("Saturday");
    else
        printf("Sunday");


}
