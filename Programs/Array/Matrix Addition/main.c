#include <stdio.h>
void main()
{
    int k,r1,r2,c1,c2,r,c,i,j;
    printf("Enter Number Of rows And columns Of Both Matrices:");
    scanf("%d%d%d%d",&r1,&r2,&c1,&c2);
    int m1[r1][c1],sum[r1][c1];
    int m2[r2][c2];
    if((r1==r2)&&(c1==c2))
    {
        for(r=0;r<r1;r++)
        {
            for(c=0;c<c1;c++)
            {
                scanf("%d",&m1[r][c]);
                scanf("%d",&m2[r][c]);
                sum[r][c]=m1[r][c]+m2[r][c];
            }
        }
        for(r=0;r<r1;r++)
        {
            for(c=0;c<c1;c++)
            {
                printf("%d ",sum[r][c]);
            }
                printf("\n");
        }
    }
    }




