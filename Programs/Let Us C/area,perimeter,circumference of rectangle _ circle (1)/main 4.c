#include <stdio.h>
void main()
{ float l,b,r,a1,a2,p,c;
printf("Length=");
scanf("%f",&l);
printf("Breadth=");
scanf("%f",&b);
printf("Radius=");
scanf("%f",&r);
a1=l*b;
p=2*(l+b);
a2=3.14*r*r;
c=2*3.14*r;
printf("Area_of_Rectange=%f\nPerimeter_of_Rectangle=%f\nArea_of_Circle=%f\nCircumference_of_Circle%f",a1,p,a2,c);
}

