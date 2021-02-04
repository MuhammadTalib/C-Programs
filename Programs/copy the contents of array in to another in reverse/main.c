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
        d=1;
        rev[i]=arr[n-d];
        d++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",rev[i]);
    }

}
