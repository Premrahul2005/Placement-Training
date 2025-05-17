#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
   int b=a%3;
    if (a%3==0)
    {
        printf("The number is divisible by 3");
    }
    else
        printf("The number is not divisible by 3 and gives a remainder %d",b);
    return 0;
}
