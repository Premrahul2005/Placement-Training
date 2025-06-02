#include <stdio.h>
#include <string.h>

void rotate(char *str, int n) 
{
    int len = strlen(str);
    n = n % len;

    for (int i = 0; i < n; i++)
    {
        char first = str[0];
        for (int j = 0; j < len - 1; j++)
        {
            str[j] = str[j + 1];
        }
        str[len - 1] = first;
    }
}

int main() 
{
    char str[100];
    int n;
    printf("Enter number of rotations: ");
    scanf("%d", &n);
    printf("Enter string: ");
    scanf("%s", str);
    rotate(str, n);
    printf("Output: %s\n", str);
    return 0;
}