#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("The maximum number is: %d\n", num1);
    } else {
        printf("The maximum number is: %d\n", num2);
    }
    return 0;
}
