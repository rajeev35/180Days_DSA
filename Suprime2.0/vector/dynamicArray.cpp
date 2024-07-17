#include<iostream>
using namespace std;
void printArray(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}


int main(){

    // static meemory allocation of ddynamic array
    // int arr[5] = {1,2,3,4,5};
    // printArray(arr,5);
    int n;
    cin>>n;
    int *arr = new int [n];
   

    for(int i = 0; i<n; i++){
        int data;
        cin>>data;
        arr[i] = data;
    }
    for(int  i = 0; i<10; i++){
        arr[n+i] = 80;
    }
     printArray(arr,n);
    

}
