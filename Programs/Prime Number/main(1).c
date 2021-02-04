#include <stdio.h>
void main()
{
    int n,flag,i=2;
    scanf("%d",&n);
    while(i<=n-1)
    {
        if((n%i)!=0)
        {
            flag=0;
            i++;
        }
        else
        {
            flag=1;
            n=0;
        }
    }
    if(flag==0)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is not prime");
    }
    }


