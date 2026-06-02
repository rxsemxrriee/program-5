#include <stdbool.h>
#include <stdio.h>

int main() {
  char A;
  while (true) {
    printf("Enter a number: ");
    scanf(" %c", &A);
    if (A == '0') {
      printf("Super Lucky\n");
    } else if (A == '1') {
      printf("Lucky\n");
    } else if (A == '2') {
      printf("Normal\n");
    } else if (A == '3') {
      printf("Bad\n");
    } else if (A == '4') {
      printf("Super Bad\n");
    } else if (A == '*') {
      break;
    } else {
      printf("Error\n");
    }
  }
  return 0;
}