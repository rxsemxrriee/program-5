#include <stdio.h>
int main() {
    float num1;
    double num2;

    printf("Enter a number : ");
    scanf("%f", &num1);
    printf("Enter another number : ");
    scanf("%lf", &num2);

    printf("num 1 = %f\n",num1);
    printf("num 2 = %lf",num2);
}