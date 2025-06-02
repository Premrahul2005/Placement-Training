#include <stdio.h>
#include <string.h>

int main() 
{
    char ch, str[100];
    int found = 0;
    printf("Enter the character to search: ");
    scanf(" %c", &ch);
    printf("Enter the string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) 
        {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Output: Present\n");
    else
        printf("Output: Not Present\n");
    return 0;
}