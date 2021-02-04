#include <stdio.h>
void main()
{
    int n,i,p,d;
    printf("How many numbers in the array:");
    scanf("%d",&n);
    int arr[n],rev[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        p=n-i+1;
        rev[i]=arr[p];
    }
    for(i=0;i<n;i++)
    {
        printf("%d",rev[i]);
    }

}
