#include <stdio.h>

int start_index = 1, end_index = 10;
int main()
{
    for (int i = start_index; i <= end_index; i++)
    {
        printf("i = %d \n", i);
        if (i == 5) {
            break;
        }
    }
    return 0;
}