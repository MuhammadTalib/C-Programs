#include <stdio.h>
void main()
{
    float l,b;
    printf("Enter Length of triangle:");
    scanf("%f",&l);
     printf("Enter Breadth of triangle:");
      scanf("%f",&b);
      if((l*b)>(2*(l+b)))
      {
          printf("Area is greater");
      }
      else
      {
          printf("Perimeter is greater");
      }
}
