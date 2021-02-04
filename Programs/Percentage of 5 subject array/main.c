#include <stdio.h>
void main()
{
    int n,i;
    float x,sum=0.00;
    printf("Enter Number of Subject:");
    scanf("%d",&n);
    int mark[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Marks of Subject %d:",i+1);
        scanf("%d",&mark[i]);
        sum=sum+mark[i];
    }
    x=sum/n;
    printf("Percentage:%f",x);

}
