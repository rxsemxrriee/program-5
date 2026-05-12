#include <stdio.h>

int main() {
    int n1,n2;
    int a_ans, d_ans, m_ans, q_ans, r_ans;

    printf("Please enter two integers \n");
    printf("integer 1: ");
    scanf("%d", &n1);
    printf("integer 2: ");
    scanf("%d", &n2);

    printf("%d + %d = %d \n", n1, n2, n1+n2);
    printf("%d - %d = %d \n", n1, n2, n1-n2);
    printf("%d * %d = %d \n", n1, n2, n1*n2);
    printf("%d %% %d = %d \n", n1, n2, n1%n2);

    return 0;
}