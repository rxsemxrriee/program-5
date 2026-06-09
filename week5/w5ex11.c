#include <stdio.h>

int main() {
    int size, num;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        array[i] = num;
    }
    for (int k = 0; k < size - 1; k++)
    {
        for (int i = 0; i < size - 1 - k; i++)
        {
            if (array[i] > array[i + 1])
            {
                int j = array[i];
                array[i] = array[i + 1];
                array[i + 1] = j;
            }
        }
    }
    printf("Elements of array in an ascending order: ");
    for (int l=0;l<size;l++) {
        printf("%d ",array[l]);
    }
}