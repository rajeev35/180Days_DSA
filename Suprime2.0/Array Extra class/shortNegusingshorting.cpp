#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot element
    int i = low - 1;       // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is less than the pivot
        if (arr[j] < pivot) {
            i++;    // Increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Function to sort the array using Quick Sort algorithm
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi is partitioning index, arr[pi] is now at the right place
        int pi = partition(arr, low, high);

        // Separately sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to move all negative numbers to one side of the array
void shiftNegOneside(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

int main() {
    int arr[] = {23, -7, 12, -10, -11, 40, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // First, shift all negative numbers to one side
    shiftNegOneside(arr, n);
    
    // Sort the array using Quick Sort algorithm
    quickSort(arr, 0, n - 1);
    
    cout << "Printing The Array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
