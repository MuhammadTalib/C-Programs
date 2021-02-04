#include <stdio.h>
void main()
{
    int n,f=1,i;
    char ch='y';
    while((ch=='y')||(ch=='Y'))
    {
        printf("Enter Number:");
        scanf("%d",&n);
        while(n!=0)
    {
        f=n*f;
        n=n-1;

    }
    printf("Factorial of the number is:");
    printf("%d\n",f);
    printf("if you want to continue press Y\n");
    ch=getch();
    }
}
