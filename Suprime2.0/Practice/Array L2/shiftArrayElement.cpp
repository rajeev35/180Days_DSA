#include<iostream>
using namespace std;
void shiftArrayElement(int arr[], int size){
    int temp = arr[size-1];
    for(int i = size - 1; i>=1; i-- ){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

}
int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = 6;
    shiftArrayElement(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}