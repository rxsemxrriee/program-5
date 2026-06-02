#include <stdio.h>

int main()
{
    int in_num;
    printf("Input an integer: ");
    scanf("%d",&in_num);
    if (in_num % 2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
    return 0;
}