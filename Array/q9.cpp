#include<iostream>
using namespace std;

void fun(int a[], int n){
    for(int i = 0;i<n;i++)
    cout<<a[i]<<" ";
}
int main(){

    
    int arr[5] = {1,2,3,5,6};
    fun(arr, 5);
}