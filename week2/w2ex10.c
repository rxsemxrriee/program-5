#include <stdio.h>

void calc_fal(float c) {
    float f  = (c*9)/5 + 32;
    printf("Farenheit = %.2f",f);
}
int main() {
    float c;
    float *ptr_c;
    printf("Enter celcius: ");
    scanf("%f",&c);
    ptr_c = &c;
    calc_fal(*ptr_c);
    return 0;
}