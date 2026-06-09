#include <stdio.h>

int main() {
    int array[5];
    printf("Enter 5 numbers: \n");
    for (int i=0;i<5;i++) {
        scanf("%d",&array[i]);
    }
    printf("Displaying integers: \n");
    for (int j = 0;j<5;j++) {
        printf("%d \n",array[j]);   
    }
}