#include <stdio.h>
void main()
{
    int i,j,k,m,n,p,q,sum=0,r1,r2,c1,c2,x,y;
    printf("Enter rows and columns of 1st matrix then 2nd matrix:");
    scanf("%d%d%d%d",&m,&n,&p,&q);
    int mat1[m][n],mat2[p][q];
    int mult[m][q];
    if(n==p)
    {
        printf("Enter Elements of 1st Matrix:\n");
        for(r1=0;r1<m;++r1)
        {
            for(c1=0;c1<n;++c1)
            {
                scanf("%d",&mat1[r1][c1]);
            }
        }
        printf("Enter Elements of 2nd Matrix:\n");
        for(r2=0;r2<p;++r2)
        {
            for(c2=0;c2<q;++c2)
            {
                scanf("%d",&mat2[r2][c2]);
            }
        }
        printf("Multiplication of given matrice are:\n");
        for(x=0;x<m;x++)
        {
            for(y=0;y<q;y++)
            {
                for(k=0;k<n;k++)
                {
                    sum=sum+mat1[x][k]*mat2[k][y];
                }
                if(sum<=9)
                {
                    printf("  ");
                }
                    mult[x][y]=sum;
                    sum=0;
                    printf("%d ",mult[x][y]);
        }
        printf("\n");
    }
    }


}
