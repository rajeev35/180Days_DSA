#include <iostream>

using namespace std;

void zeroOneCountOptimized(int arr[], int size) {
    int zeroCount = 0;

    for (int i = 0; i < size; i++) {
        zeroCount += (arr[i] == 0);
    }

    cout << "ZeroCount is " << zeroCount << endl;
    cout << "OneCount is " << size - zeroCount << endl;
}

int main() {
    int arr[10] = {1, 0, 1, 0, 1, 1, 1, 1, 0, 1};
    int size = 10;

    zeroOneCountOptimized(arr, size);

    return 0;
}