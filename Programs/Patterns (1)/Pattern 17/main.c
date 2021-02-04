#include <stdio.h>
void main()
{
    int n,i,j,k,l=1,m;
    scanf("%d",&n);
  /*1     1
     2   2
      3 3
       4
      3 3
     2   2
    1     1
    */
    for(i=1;i<4;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        printf("%d",i);
        for(k=i;k<=4;k++)
        {
            if(k%2!=0)
            printf(" ");
        }
        printf(" %d",i);
         printf("\n");
    }


}
