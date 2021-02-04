#include <stdio.h>
#include <conio.h>
void main()
{
    float cp,sp,p;
    printf("Enter Cost Price:");
    scanf("%f",&cp);
    printf("Enter Selling Price:");
    scanf("%f",&sp);
    if(cp==sp)
    {
        printf("Seller has made no profit");
    }
    else
        if(cp<sp)
        {
            printf("Seller has made ");
            p=sp-cp;
            printf("Profit of Rupees:%f",p);
        }
        else
        {
            printf("Seller has incurred ");
            p=cp-sp;
            printf("Loss Of Rupees:%f",p);
        }
}
