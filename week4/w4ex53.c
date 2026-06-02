#include <stdio.h>

int start_index = 1, end_index = 10;

int main() {
  int i = start_index;

  do {
    if (i % 2 == 0) {
      i++;
      continue;
    }
    printf("%d", i);
    i++;
  } while (i < (end_index + 1));
  return 0;
}