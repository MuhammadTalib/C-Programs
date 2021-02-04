#include <stdio.h>
void main()
{
    int n,j,r,x,y,i,k,p,f,v,s,q;
    scanf("%d",&p);
    for(n=0;n<=p;n++)
    {
        for(j=1;j<=p-n;j++)
        {
            printf(" ");
        }
        for(r=0;r<=n;r++)
        {
            q=n;
            v=r;

            if((n==0)||(n==1)||(r==0)||(n==r))
            {
                x=1;
            }
           else
           {
               if(r==1)
                {
                    x=n;
                }
                else
                {
                    for(i=q-1;i>1;i--)
                    {
                        q=q*i;
                    }
                    for(j=v-1;j>1;j--)
                    {
                        v=v*j;
                    }

               {

                    y=n-r;
                    if(y==1)
                {
                    y=1;

                }

                else
                {
                   for(k=y-1;k>=1;k--)
                {
                    y=y*k;
                }


                }}
                 x=q/(y*v);

                }}
                printf("%d ",x);
                }
                printf("\n");

        }

    }

