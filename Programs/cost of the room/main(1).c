#include <stdio.h>
void main()
{
    /*2. A hotel has a pricing policy as follows:
a. 2 people: $85
b. 3 people: $90
c. 4 people: $95
d. Additional people: $6 per person
If the customer is staying on company business, there
is a 20% discount. If the customer is over 60 years of
 age, there is a 15% discount. A customer does not receive
  both discounts. Given the above data, print the cost of the room.*/

    int p;
    float c;
    char ch;
    printf("How many people you are=");
    scanf("%d",&p);
    printf("Are you staying on company business,there is a 20 percent discount press Y or N:");
    ch=getche();
    if((ch=='y')||(ch=='Y'))
        if(p==2)
        printf("Cost of the room is:%f",(85/100)*80);
        elseif()
        printf("Cost of the room is:85);
    else
        printf("If your age is over 60 years of age, there is a 15% discount press Y");
        if((ch=='y')||(ch=='Y'))
            if(p==2)
        printf("Cost of the room is:%f",(85/100)*85);
        else
        printf("Cost of the room is:85);





}
