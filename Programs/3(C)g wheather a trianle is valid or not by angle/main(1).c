#include <stdio.h>
void main()
{
    float a,b,c;
    printf("Enter ALPHA:");
    scanf("%f",&a);
    printf("Enter BETA:");
     scanf("%f",&b);
     printf("Enter GAMA:");
      scanf("%f",&c);
      if(a+b+c==180)
      {
          printf("Triangle is valid");
      }
      else
      {
          printf("Triangle isn't valid");
      }

}

