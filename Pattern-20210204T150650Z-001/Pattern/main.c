#include <stdio.h>
void main()
{
    /*1  2  3  4  5
      16          6
      15          7
      14          8
      13 12 11 10 9*/

    int i,j,k=1,arr[5][5];
    char l;
    int m=0;
    for(i=1;i<5;i++)
    {
        if(i==1)
        for(j=1;j<=5;j++)
        {
            printf("%d ",j);
        }

        else if(i>=2)
            for(l=5+13-i;m<=5;l=' ')
        {
            m++;
            printf("%c ",l);

        }
    }

}
