// Bubble sort
#include "bubble_sort.h"
#include <iostream>

/**
 * Bubble sort algorithm
 * @param array
 * @param n
 * @return sorted array
 */
int *bubbleSort(int *array, int n) {
    bool swapping = true;
    int k = 0;
    int temporal;

    while (swapping) {
        swapping = false;
        k++;

        for (int i = 0; i < n - k; ++i) {
            if (array[i] > array[i + 1]) {
                temporal = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temporal;
                swapping = true;
            };
        }
    }

    return array;
}

int main() {
    int array[] = {32, 44, 55, 11, 002, 224, 55, 1, 22};

    int t = sizeof(array) / sizeof(array[0]);

    auto sorted = bubbleSort(array, t);

    for (int i = 0; i < t; ++i) {
        std::cout << sorted[i] << std::endl;
    }

    return 0;
}
