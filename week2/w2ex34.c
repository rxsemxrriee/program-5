#include <stdio.h>

int main() {
    int a; 
    float b;

    printf("Enter an integer and follow up by a float: ");
    scanf("%d%f",&a,&b);

    printf("You entered %d and %f",a,b);
    return 0;
}