#include <stdio.h>

void main()
{
    /*q4:write a program to print the table of a given no?*/
    int n,i;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("Table of the given number is:\n");
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }


}
