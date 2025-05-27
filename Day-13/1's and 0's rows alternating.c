#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i % 2 == 0)
                printf("0");
            else 
                printf("1");
        }
        printf("\n");
    }
    return 0;
}
