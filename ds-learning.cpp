#include <iostream>

void learning() {
    const int array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        std::cout << "Element at index " << i << " is " << array[i] << std::endl;
    }
    std::cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << " ";
    }

    for (const int & array1: array) {
        std::cout << array1 << " ";
    }
    // The std::endl here would create an extra newline if the intent is to have all elements on one line.
    // If a newline is desired after this loop, consider adding one after the previous loop as well for consistency.
    // For now, removing it to keep all elements on a single line.
}