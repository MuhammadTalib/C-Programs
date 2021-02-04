#include <stdio.h>
void main()
{
    int a,b,t=1,g;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=b)
    {   g=a;
    }
    else
    {
        g=b;
    }
      while(t<=5)
    {
        scanf("%d",&a);
        t++;
        if(a>=g)
        {
            g=a;



        }




    } printf("%d",g);
}





