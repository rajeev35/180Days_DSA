#include<iostream>
using namespace std;
void countZeroOne(int arr[], int size){
    int ZeroCount = 0;
    int OneCount = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            ZeroCount++;
        }
        if(arr[i] == 1){
            OneCount++;
        }

    }
        int i;
    for(i = 0; i<ZeroCount; i++){
        arr[i] = 0;
    }
    for(int j = i; j<size; j++){
        arr[j] = 1;
    }
}
int main(){
    int arr[] = {1,0,1,0,1,0,1,0,1,0,0,0,1,1,0};
    int n = 15;
    countZeroOne(arr, n);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }



}