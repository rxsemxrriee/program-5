#include <stdio.h>

void calc_area(float height,float width) {
    float area = 0.5*height*width;
    printf("%f",area);
}
int main() {
    float w,h;
    float *ptr_w,*ptr_h;
    ptr_w = &w;
    ptr_h = &h;
    printf("Input width and height: ");
    scanf("%f %f",&w,&h);
    calc_area(*ptr_h, *ptr_w);
    return 0;
}