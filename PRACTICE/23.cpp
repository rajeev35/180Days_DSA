#include<iostream>
using namespace std;

int maxValue(int arr[],int size){

    int ans = INT_MIN;
    for(int i = 0; i<size; i++){

        if(arr[i]>ans){
            ans = arr[i];

        }
    }return ans;

}
int main(){


    int arr[5] = {2,6,3,45,9};

    int maxNumber = maxValue(arr,5);
    cout<<"The Maximum Number of Given Number is "<<maxNumber<<endl;

    return 0;

}
