#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isValidUsername(const char *username) 
{
    int length = strlen(username);
    if (length < 5 || length > 12) 
    {
        return 0;
    }
    for (int i = 0; i < length; ++i) 
    {
        if (!isalnum(username[i])) 
        {
            return 0;
        }
    }
    return 1;
}

int main() 
{
    char username[100];
    printf("Enter a username: ");
    scanf("%s", username);

    if (isValidUsername(username)) 
    {
        printf("Valid username.\n");
    }
    else 
    {
        printf("Invalid username.\n");
    }
    return 0;
}