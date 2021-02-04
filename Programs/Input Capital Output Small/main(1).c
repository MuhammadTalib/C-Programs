#include <stdio.h>
void main()
{
    printf("Enter Capital Letter:");
    char ch;
    ch=getche();
    if ((ch>='A')&&(ch<='Z'))
    {
    printf("\nSmall Letter:");
    printf("%c",ch+32);

    }
    else
    {
        printf("\nWrong Choise");
    }


}
