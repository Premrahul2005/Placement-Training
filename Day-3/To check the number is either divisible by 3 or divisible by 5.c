#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int p;
    scanf("%d", &p);
    if (p%3==0&&p%5==0) 
    {
        printf("HiHello");
    } 
    else if (p%3==0) 
    {
        printf("Hi");
    }
    else if (p%5==0) 
    {
        printf("Hello");
    } 
    return 0;
}
