#include <iostream>
#include <algorithm>

int main() {
    // Input array in random order
    int arr[] = {5,3,1,4,2};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sort the entire array in ascending order
    std::sort(arr, arr + size);

    // Sort the second half of the array in descending order
    std::sort(arr + size / 2, arr + size, std::greater<int>());

    // Display the final array
    std::cout << "Sorted array with first half smallest to largest and second half largest to smallest: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
