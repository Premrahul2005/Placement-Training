#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n; 
    scanf("%d", &n); 
    int a[n], i, z = 0, o = 0; 
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) 
    {
        if (a[i] == 0)
            z++;
        else if (a[i] == 1)
            o++;
    }
    printf("zc = %d\n", z);
    printf("oc = %d\n", o);
    return 0;
}
