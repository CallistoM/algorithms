#include "bubble_sort/bubble_sort.h"
#include <iostream>

int main() {
    int array[] = {32, 44, 55, 11, 002, 224, 55, 1, 22};

    int t = sizeof(array) / sizeof(array[0]);

    auto sorted = bubbleSort(array, t);

    for (int i = 0; i < t; ++i) {
        std::cout << sorted[i] << std::endl;
    }

    return 0;
}