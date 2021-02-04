#include <stdio.h>
void main()
/*55555
  45555
  34555
  23455
  12345*/
  {
      int n,i,j,k;
      scanf("%d",&n);
      for(i=5;i>0;i--)
      {
          k=i;
          for(j=1;j<=n;j++)
          {
              if(k<=5)
              {printf("%d",k);
              }
              else
              {
                  printf("5");
              }
              k++;
          }

          printf("\n");
      }
  }
