#include <stdio.h>

int main() {
  int usr_input, sum = 0, i = 0;

  printf("Enter an integer: ");
  scanf("%d", &usr_input);

  while (i <= usr_input) {
    sum += i;
    i++;
  }

  printf("Sum: %d", sum);
  return 0;
}