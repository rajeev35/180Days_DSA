#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than current, to one position ahead
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main() {
    int arr[1000];
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    if (n > 1000 || n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
