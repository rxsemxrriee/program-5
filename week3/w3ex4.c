#include <stdio.h>

int main() {
    int pre_determined, in_num;
    pre_determined = 1009 % 9;
    printf("Enter an integer between 0-20: ");
    scanf("%d",&in_num);

    if (pre_determined>in_num) {
        printf("Smaller");
    }
    else if (pre_determined<in_num)
    {
        printf("Larger");
    }
    else {
        printf("Equal");
    }
    return 0;
}