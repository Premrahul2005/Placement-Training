#include <stdio.h>

int main() {
    float x, result;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    result = x + (x * 10 / 100);
    printf("Result: %.2f\n", result);
    return 0;
}
