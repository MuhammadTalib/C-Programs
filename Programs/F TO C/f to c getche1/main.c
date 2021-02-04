#include <stdio.h>
#include <conio.h>
void main()
    {
        char ch;
        float t,nt;
        printf("Enter choice C for F to C & F for C to F:");
        ch=getche();
        if((ch!='C')&&(ch!='F')&&(ch!='c')&&(ch!='f'))
        {

         printf("\nWrong choice");
        }
        else
        {
            if((ch=='c')||(ch=='C'))
            {
                printf("\nEnter F:");
                scanf("%f",&t);
                nt=((t-32)/9)*5;
                printf("C:");
            }
            else
            {
                printf("\nEnter C:");
                scanf("%f",&t);
                nt=((t/5)*9)+32;
                printf("F:");

            }
             printf("%f",nt);
        }
    }
