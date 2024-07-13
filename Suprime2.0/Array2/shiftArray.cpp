#include<iostream>
using namespace std;
void shiftArray(int arr[], int size){
    int temp  = arr[size-1];
    for(int i = size-1; i>=1; i--){
        arr[i]  = arr[i-1];

    }

    arr[0] = temp;



}
int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = 6;
    shiftArray(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

// #include <iostream>
// using namespace std;

// void shiftArray(int arr[], int size) {
//     int temp = arr[size - 1];
//     for (int i = size - 1; i >= 1; i--) { // Decrement i instead of size
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = temp;
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50, 60};
//     int n = 6;
//     shiftArray(arr, n);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << endl;
//     }
// }


