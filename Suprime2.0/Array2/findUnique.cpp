#include<iostream>
using namespace std;
int findUnique(int arr[], int size){
    int ans = 0;
    for(int i =0; i<size; i++){
        ans = ans^arr[i];

    }
    return ans;
}
int main(){
    int arr[] = {2,10,11,10,2,13,15,13,15};
    int size = 9;
    int result = findUnique(arr,size);
    cout<<"Unique Number is : "<<result<<endl;

}