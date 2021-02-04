#include <stdio.h>
void main()
{

    int p,n,s,i=2;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("Enter Power:");
    scanf("%d",&p);
    s=n;
    do
      {
        i++;
        n=n*s;
      }
    while(i<=p);
    printf("%d",n);
}
