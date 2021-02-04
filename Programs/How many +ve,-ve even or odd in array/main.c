#include <stdio.h>
void main()
{
    int u,i,p=0,n=0,e=0,o=0;
    printf("How Many number are in the array:");
    scanf("%d",&u);
    int arr[u];
    for(i=0;i<u;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            p++;
        }
        if(arr[i]<0)
        {
            n++;
        }
        if(arr[i]%2!=0)
            o++;
        if(arr[i]%2==0)
            e++;
    }
    printf("Positive:%d\nNegative:%d\nEven:%d\nOdd:%d",p,n,e,o);

}
