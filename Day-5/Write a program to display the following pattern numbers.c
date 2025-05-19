#include <stdio.h>

int main()
{
    int rows;
    scanf("%d",&rows);
    for(int a=1;a<=rows;a++)
    {
        for(int b=1;b<=a;b++)
        {
            if(a % 2==1)
                printf("%d", 2 * b - 1);
            else 
                printf("%d", 2 * b);
        }
        printf("\n");
    }

    return 0;
}
