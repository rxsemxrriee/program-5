#include <stdio.h>

int main() {
    int array[7] = {10, 20, 30, 40, 50, 60, 70};
    printf("array[0] = %d \n", array[0]);

    printf("Enter a number: ");
    scanf("%d", &array[0]);
    printf("array[0] = %d",array[0]);
    return 0;   
}