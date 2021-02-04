#include <stdio.h>
void main()
    {
        float ch,t,nt;
        printf("Enter choice 1 for F to C & 2 for C to F:");
        scanf("%f",&ch);



        if ((ch==1)||(ch==2))
        {
            if(ch==1)
            {
                printf("Enter F:");
                scanf("%f",&t);
                nt=((t-32)/9)*5;
                printf("C:");
            }
            else
            {
                printf("Enter C:");
                scanf("%f",&t);
                nt=((t/5)*9)+32;
                printf("F:");
            }
             printf("%f",nt);

        }
        else
        {
            printf("Wrong choice");
        }



  }
