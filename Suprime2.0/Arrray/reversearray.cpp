#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int left = 0;
    int right = size-1;
    // for(int i = 0; i<size; i++){
    //     swap(arr[left],arr[right]);
    //     left++;
    //     right--;
    // }

    while(left<=right){
        swap(arr[left],arr[right]);

        left++;
        right--;
    }

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;
    reverseArray(arr,size);


}