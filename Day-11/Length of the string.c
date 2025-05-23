#include <stdio.h>
int main()
{
    char str[] = "Hello, world!";
    char *ptr = str;
    int length = 0;
        while (*ptr != '\0')
            {
                length++;
                ptr++;
            }
                printf("Length of the string is: %d\n", length);
    return 0;
}
