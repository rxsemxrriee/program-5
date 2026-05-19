#include <stdio.h>

int main() {
    float sum = (float) 5/2;
    printf("1. Explicit math (5/2): %f]\n", sum);

    float price = 19.99;
    int dollars = (int)price;
    printf("2.Price Truncation ($19.99): %d dollars\n",dollars);

    int secretCode = 71;
    printf("3. Secret Code 71 is the letter: %c\n", (char)secretCode);


    int score = 85;
    int totalPossible = 90;
    float percentage = ((float)score/totalPossible) * 100;
    printf("4.Exam score: %.2f%%\n",percentage);

    return 0;
}