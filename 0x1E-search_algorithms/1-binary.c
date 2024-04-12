#include <stdio.h>

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    size_t start = 0;
    size_t end = size - 1;

    while (start <= end) {
        printf("Searching in array: ");
        for (size_t i = start; i <= end; i++) {
            printf("%d", array[i]);
            if (i < end) {
                printf(", ");
            }
        }
        printf("\n");

        size_t mid = start + (end - start) / 2;

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

