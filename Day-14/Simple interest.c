#include <stdio.h>
int main()
{
    float principal =100, years= 1, rate = 10;
    float interest = (principal*rate*years)/100;
    float total_amount = principal + interest;
    float discount = 0.02 * interest;
    float final_settlement = total_amount - discount;
    printf("%.2f\n", interest);
    printf("%.2f\n", total_amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", final_settlement);
    return 0;
}
