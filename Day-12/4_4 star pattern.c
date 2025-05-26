#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) 
        {
            if (i == 0 || i == size - 1 ||  
                j == 0 || j == size - 1 ||   
                i == j || j == size - 1 - i) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
