#include <stdio.h>
void main()
{
      int n,d,r,f,sum,on;
    printf("Enter any number:");
    scanf("%d",&n);
    on=n;
   for(sum=0;n>=10;)
    {
        d=n%10;
        n=n/(10);

        sum=sum+(d*d*d);


    }

    sum=sum+(n*n*n);
    if(sum==on)
        printf("Number is armstrong");
    else
        printf("Number is not armstrong");


}

