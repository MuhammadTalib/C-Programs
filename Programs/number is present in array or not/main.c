#include <stdio.h>
void main()
{
    int n,i,s,j=0;
    printf("How many number is array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Which number u want to search:");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            j++;
        }
    }
    if(j>0)
    {
        printf("Your number is present in the array %d times",j);
    }
    else
    {
        printf("Number  is not present.");

    }



}
