#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);//8 5
    int m=(a>=b)?a:b; // 8
    while(1)
    {
        if(m%a==0 && m%b==0) //40%8==0 && 40%5==0
        {
            printf("%d",m);//40
            break;
        }
        m++;//40
    }
    return 0;
}