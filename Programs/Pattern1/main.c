#include <stdio.h>
void main()
{
/*   12345
     2345
     345
     45
     5 */
    int n,i,j,k;
    printf("From where to end;");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }

}
