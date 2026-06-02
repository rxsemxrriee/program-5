#include <stdio.h>

char operator;
double n1,n2,answer;

int main() {
    printf("Enter an operator(+,-,*,/): ");
    scanf("%c",&operator);

    printf("Enter 2 operands: ");
    scanf("%lf %lf",&n1,&n2);

    if (operator == '+') {
        answer = n1 + n2;
    }
    if (operator == '-')
    {
        answer = n1 - n2;
    }
    if (operator == '*')
    {
        answer = n1 * n2;
    }
    if (operator == '/')
    {
        answer = n1 / n2;
    }
    printf("%.2lf",answer);
    return 0;
}