#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string (password): ");
    scanf("%s", str);

    printf("Password format: ");
    for (int i = 0; i < strlen(str); i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}