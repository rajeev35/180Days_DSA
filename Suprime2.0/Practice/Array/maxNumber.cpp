#include<iostream>
using namespace std;
int MaxNumber(int arr[], int size){
    int MaxNum = INT_MIN;
    for(int i = 0; i<size; i++){
        MaxNum = max(arr[i], MaxNum);

    }
    return MaxNum;
}
int main(){
    int arr[6] = {1,2,3,4,66,7};
    int size = 6;
    int result = MaxNumber(arr,size);
    cout<<"The Maximum Number is "<<result<<endl;

}