#include <stdio.h>

int main() {
    float myFloat = 9;
    printf("1. Promotion (9 to float): %f\n",myFloat);
    

    int myInt = 9.99;
    printf("2. Truncation (9.99 to int)");

    char myLetter = 'A';
    int letterAsNumber = myLetter;
    printf("3. Character 'A' as an integer: %d\n",letterAsNumber);

    printf("4. Mixed math (5+2.5): %f\n", 5+2.5);
    return 0;
}