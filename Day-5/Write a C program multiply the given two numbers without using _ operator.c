#include <stdio.h>

int main() {
    int a,b,c=0,i;
    scanf("%d %d",&a,&b);//5 2
    for(i=0;i<b;i++)
    {
        c=c+a;//10
    }
    printf("%d",c);//10
    return 0;
}
