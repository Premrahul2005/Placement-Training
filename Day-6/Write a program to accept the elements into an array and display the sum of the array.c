#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,sum=0;
    int arr[10];
    
    scanf("%d",&n);
    for(i = 0;i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%d\n",sum);
    return 0;
}