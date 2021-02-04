#include <stdio.h>
int main()
{   int u,ut,a,x,b;
    printf("Enter Units:");
    scanf("%d",&u);
    if(u<=100)
    {
        ut=10;
        a=u*ut;
    }
    else
    {
        if((u>100)&&(u<=200))
        {
            x=u%100;
            ut=15;
            b=ut*x;
            a=b+1000;
        }
        else
        {   x=u%100;
            ut=20;
            b=ut*x;
            a=b+2500;
        }
    }
printf("%d",a);
}
