#include<stdio.h>
void main()
{
    int n,i,j,k=1;
    /*1
      23
      456
      78910*/
      printf("Enter End Point:");
      scanf("%d",&n);
      for(i=1;i<n;i++)
      {
          for(j=1;j<=i;k++)
          {
              if(n>10)
                {if(k<=9)
                {
                    printf(" ");
                }
                }
              printf("%d ",k);
              j++;

          }
          printf("\n");
      }
}
