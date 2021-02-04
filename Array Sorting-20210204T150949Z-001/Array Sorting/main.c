
#include <stdio.h>
void main()
{
    int w,i,j,k,l;
    printf("How many Number in the array:");
    scanf("%d",&w);
    int arr[w];
    for(i=0;i<w;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<w;j++)
    {
        for(k=j;k<w;k++)
        {
            if(arr[j]<arr[k])
            {
                l=arr[j];
                arr[j]=arr[k];
                arr[k]=l;
            }
        }
        printf("%d, ",arr[j]);
    }

}
