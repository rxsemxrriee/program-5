#include <stdio.h>

int start_index = 1, end_index = 10;

int main()
{
    int i = start_index;
    while (i < (end_index + 1))
    {
        printf("%d", i);
        if (i == 5 ) {
            break;
        }
        i++;
    }
    return 0;
}