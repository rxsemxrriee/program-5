#include <stdio.h>

int start_index = 1, end_index = 10;
int main()
{
    for (int i = start_index; i <= end_index; i++)
    {
        if (i % 2 == 0) {
            continue;
        }
        printf("i = %d \n", i);
    }
    return 0;
}