#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,6,8,5};
    for(int j =4;j>0;j--){

        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
        
        else{
            break;
        }




    }

    for(int j =0;j<=4;j++){
        cout<<arr[j];
    }
}