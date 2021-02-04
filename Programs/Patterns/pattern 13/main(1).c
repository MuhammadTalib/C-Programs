#include <stdio.h>
void main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    /*1
      2 4
      1 3 5
      2 4 6 8
      1 3 5 7 9
      */
      for(i=1;i<=n;i++)
      {
          l=i;
          if(i%2==1)
          {
              l=1;
          }
          else
          {
              l=2;
          }
          for(j=1;j<=i;j++)
          {
              printf("%d ",l);
              l=l+2;
          }
          printf("\n");

      }
}
