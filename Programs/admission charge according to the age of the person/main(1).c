#include <stdio.h>
void main()

 {

    /*1. An admission charge for The Little Rep Theater varies
    according to the age of the person. Develop a program to print
    the ticket charge given the age of the person. The charges are as follows:
a. Over 55: PKR 10.00
b. 21–54: PKR 15.00
c. 13–20: PKR 10.00
d. 3–12: PKR 5.00
e. Under 3: Free*/

    int age;
    printf("Enter Age of person:");
    scanf("%d",&age);
    if(age>=55)
        printf("Ticket Charge:PKR 10.00");
    else if((age>=21)&&(age<=54))
        printf("Ticket Charge:PKR 15.00");
    else if((age>=13)&&(age<=20))
        printf("Ticket Charge:PKR 10.00");
    else if((age>=3)&&(age<=12))
        printf("Ticket Charge:PKR 5.00");
    else
        printf("Ticket Charge is FREE");


}
