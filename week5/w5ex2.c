#include <stdio.h>

float f;
int i;

int main() {
    for (f=0.01;f<1;f+=0.01) {
        printf("%f ",f);
    }
    printf("-------------------------\n");
    for (i=1;i<100;i++) {
        printf("%d ",i);
        if (i%5==0) {
            printf("\n");
        }
    }
    printf("float: %f, int: %d",f,i);
    return 0;
}