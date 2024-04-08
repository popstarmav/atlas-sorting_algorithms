#include "sort.h"
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;
    bool swapped = false;

    for (i = 0; i < size - 1; i++) 
    {
        swapped = false;

        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swapped = true;

                for (size_t k = 0; k < size; k++)
                {
                    printf("%d ", array[k]);
                }
                printf("\n");
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

