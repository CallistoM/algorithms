// Bubble sort

#include <iostream>
#include "wiggle_sort.h"

int *wiggleSort(int *array) {

    for (int i = 0; i < sizeof(array); ++i) {
        if ((i % 2 == 1) == (array[i - 1] > array[i])) {
            array[i] = array[i - 1];
            array[i - 1] = array[i];
        }
    }

    return array;
}


int main() {
    int array[] = {32, 44, 55, 11, 002, 224, 55, 1, 22};

    auto sorted = wiggleSort(array);

    for (int i = 0; i < sizeof(array); ++i) {
        std::cout << sorted[i] << std::endl;
    }

    return 0;
}