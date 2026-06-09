#include <stdio.h>

int main() {
    int array2[5] = {54,94,80,75,66};
    int max,size = 5;
    float avg;
    for (int k = 0; k < size - 1; k++)
    {
        for (int i = 0; i < size - 1 - k; i++)
        {
            if (array2[i] > array2[i + 1])
            {
                int j = array2[i];
                array2[i] = array2[i + 1];
                array2[i + 1] = j;
            }
        }
    }
    printf("max = %d",array2[4]);
        for (int i = 0; i < size; i++)
        {
            avg += array2[i];
        }
        printf("\navg = %.2f",avg/size);
}