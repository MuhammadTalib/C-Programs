#include <stdio.h>
void main()

{float m1,m2,m3,m4,m5,t,p;
scanf("%f",&m1);
scanf("%f",&m2);
scanf("%f",&m3);
scanf("%f",&m4);
scanf("%f",&m5);
t=m1+m2+m3+m4+m5;
p=(m2+m3+m4+m5+m1)*0.2;
printf("TotalMarks:%f Out of 500\nPercentage:%f",t,p);
}
