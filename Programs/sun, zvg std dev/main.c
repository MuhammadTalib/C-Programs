#include <stdio.h>
void main()
{
    int n,f=0,s,i,sum=0,avg,r;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    avg=sum/n;
    for(i=0;i<n;i++)
    {
        r=(arr[i]-avg)*(arr[i]-avg);
        f=f+r;
    }
    s=f/n;
    printf("sum=%d avg=%d standard deviation=%d",sum,avg,s);




}
