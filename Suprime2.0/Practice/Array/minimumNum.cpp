#include<iostream>
using namespace std;
int minAns = INT_MAX;

int minNum(int arr[], int size){
        for(int i = 0; i<size;i++){
            minAns = min(arr[i], minAns);

        }
        return minAns;

}
int main(){
    int arr[6] = {-2,-5,4,6,7,88};
    int size = 6;
    int result  = minNum(arr, size);
    cout<<"Minimum Number is "<<result<<endl;

}