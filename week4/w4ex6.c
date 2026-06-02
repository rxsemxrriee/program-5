#include <stdio.h>

int main() {
  int n = 0;

  if (n == 0) {
    goto jump_to_here;
  }
  printf("You entered: %d\n", n);

jump_to_here:
  printf("Exiting the program.\n");
  return 0;
}