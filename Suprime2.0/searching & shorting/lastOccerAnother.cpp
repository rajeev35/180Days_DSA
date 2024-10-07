#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
   
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int arr[] = {10, 30, 30, 30, 30, 30, 40, 50, 60};
    int n = 9;
    int target = 30;
    int ansIndex = firstOccurrence(arr, n, target);

    if (ansIndex == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << ansIndex << endl;
    }

    return 0;
}
