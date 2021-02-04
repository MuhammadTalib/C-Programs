#include <stdio.h>
void main()
{
    int a1,a2,a3;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    if((a1>a2)&&(a2>a3))
    {
        printf("3rd is youngest");
    }
    else
    {
        if((a3>a2)&&(a2>a1))
        {
            printf("1st is youngest");
        }
        else
        {
            if((a1==a2)&&(a2==a3))
            {
               printf("ages are equal");
            }
            else
            {
            printf("2nd is youngest");
        }}
    }

}
