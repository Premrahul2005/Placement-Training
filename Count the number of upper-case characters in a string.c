#include <stdio.h>

int main() 
{
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            count++;
        }
    }
    printf("Output: %d\n", count);
    return 0;
}