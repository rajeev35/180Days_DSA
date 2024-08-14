#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int target = -3;
    bool flag = 0;
    for(int i = 0; i<n;i++){
        if(arr[i] == target){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"Number is Found"<<" ";
    }else{
        cout<<"Number is Not Found"<<" ";
    }
    return 0;
}
