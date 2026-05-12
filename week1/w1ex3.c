#include <stdio.h>
//overengineered version
struct Trapezoid {
    int a,c,d;
    float area;
};
void area(struct Trapezoid *no_calc) {
    no_calc->area = ((no_calc->a+no_calc->c)/2)*no_calc->d;
}
int main() {
    struct Trapezoid calc;
    struct Trapezoid *add_calc;

    add_calc = &calc;
    int input1, input2, input3;
    printf("Input upper base: ");
    scanf("%d", &input1);
    printf("Input lower base: ");
    scanf("%d", &input2);
    printf("Input height: ");
    scanf("%d", &input3);
    add_calc->a = input1;
    add_calc->c = input2;
    add_calc->d = input3;

    area(add_calc);
    printf("%.2f", add_calc->area);
    return 0;
}



