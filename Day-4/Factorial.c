#include <stdio.h>
int main()
{
     int num;
     unsigned long long factorial=1;
     printf("Enter positive integer:");
     scanf("%d",&num);
     if (num<0){
          printf("Factorial is not defined for negative numbers");
     }
     else {
          for(int i=1;i<=num;i++)
          {
               factorial=factorial*i;
          }
          
     printf("Factorial of %d = %llu\n",num,factorial);
     }
    return 0;
}
