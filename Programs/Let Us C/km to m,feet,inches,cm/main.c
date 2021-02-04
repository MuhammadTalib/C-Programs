#include <stdio.h>
void main()
{float km;
float m,f,inch,cm;
scanf ("%f",& km);
m=km*1000;
f=km*3280.84;
inch=km*39370.1;
cm=km*100000;
printf("meters:%f\nfeet:%f\ninches:%f\ncentimeters:%f",m,f,inch,cm);



}
