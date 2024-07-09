#include<iostream>
using namespace std;
int minNumberinArray(int arr[], int size){
    int minAns = INT_MAX;
    for(int i = 0; i<size; i++){
        // if(arr[i]<minAns){
        //     minAns = arr[i];
        // }
        minAns = min(arr[i],minAns);
    }
    return minAns;
}
int main(){
    int arr[] = {-3,2,3,4,5,6,7};
    int size = 7;
    int result =  minNumberinArray(arr,size);
    cout<<"The minimum number in the array is "<<result<<endl;



}