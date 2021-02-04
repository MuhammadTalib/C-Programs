#include <stdio.h>
void main()
{
    int n,i,j,k,G,l;
    printf("Enter Size Of Array:");
    scanf("%d",&n);
    int arr[n];
    int sort[n];
    for(k=0;k<n;k++)
    {
        scanf("%d",&arr[k]);
    }
    for(i=0;i<n;i++)
    {
        sort[i]=0;
        for(j=0;j<=n;j++)
        {
            if((sort[0]!=arr[j])||(sort[i-1]!=arr[j]))
           {
               if(sort[i]<arr[j])
                {
                    sort[i]=arr[j];
                }
           }
        }
        printf("\n%d",sort[i]);
    }
    for(l=0;l<n;l++)
    {
    }

}
