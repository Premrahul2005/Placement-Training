#include <stdio.h>

int main()
{
     int a,sum=0;
    scanf("%d",&a);//10
    int i=1;
    while(i<=a)//11<=10
    {
        if(i%2==0)
        {
            sum=sum+i;//30
        }
        i++;//11
    }
    printf("%d",sum);
    return 0;
}
