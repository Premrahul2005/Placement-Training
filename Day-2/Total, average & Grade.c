#include <stdio.h>
int main() {
    float mark1, mark2, mark3, mark4, mark5, total, average;
    printf("Enter marks for Tamil: ");
    scanf("%f", &mark1);
    printf("Enter marks for English: ");
    scanf("%f", &mark2);
    printf("Enter marks for Mathematics: ");
    scanf("%f", &mark3);
    printf("Enter marks for Science: ");
    scanf("%f", &mark4);
    printf("Enter marks for Social: ");
    scanf("%f", &mark5);
    total = mark1 + mark2 + mark3 + mark4 + mark5;
    average = total / 5;
    printf("\nTotal marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    if (average >= 90) {
        printf("Grade: A+ (Excellent)\n");
    } else if (average >= 80) {
        printf("Grade: A (Very Good)\n");
    } else if (average >= 70) {
        printf("Grade: B (Good)\n");
    } else if (average >= 60) {
        printf("Grade: C (Average)\n");
    } else if (average >= 50) {
        printf("Grade: D (Pass)\n");
    } else if(average >=35) {
        printf("Grade: F (Fail)\n");
    }
    return 0;
}
