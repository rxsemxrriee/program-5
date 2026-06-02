#include <stdio.h>
#include <string.h>

int main() {
  char std_id[9];
  int sum = 0;
  printf("Enter your student ID: ");
  scanf("%s", std_id);
  for (int i = 0; i < 8; i++) {
    int n = std_id[i] - '0';
    sum += n;
  }
  printf("Sum of your student ID: %d", sum);
  return 0;
}
