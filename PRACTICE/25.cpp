#include<iostream>
using namespace std;
int main(){
    int arr[6] = {6,8,14,11,3,9};
    int i = 0;
    int j = 5;
    while(i<j){
        swap(arr[i],arr[j]);

        i++;
        j--;

    }

    for(int i = 0; i<=5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}