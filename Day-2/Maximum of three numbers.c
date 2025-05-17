#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);
    printf("Enter third number (c): ");
    scanf("%d", &c);
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    printf("The maximum number is: %d\n", max);
    return 0;
}
