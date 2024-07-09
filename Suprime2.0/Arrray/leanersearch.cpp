#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    bool flag = 0;
    int target = 43;
    for(int i = 0; i<n;i++){
      if(arr[i] == target){
        flag = 1;

        break;
      }
    }

    if(flag == 1){
        cout<<"Element Found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }

     return 0;
}