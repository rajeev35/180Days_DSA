#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n =5;

    for(int i =0;i<n;i++){
        cout<<"Enter the value of index "<< i <<endl;

        cin>>arr[i];
        cout<<endl;

    }


    cout<<"Printing the array "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}