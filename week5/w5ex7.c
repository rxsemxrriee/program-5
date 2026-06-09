#include <stdio.h>

int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

int main() {
    for (int i=0;i<3;i++) {
        for (int j=0;j<4;j++) {
            printf("a[%d][%d] = %d \t",i,j,a[i][j]);
        }
        printf("\n");
    }
    return 0;
}