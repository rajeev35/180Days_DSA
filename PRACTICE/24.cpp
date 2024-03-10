#include<iostream>
using namespace std;
int main(){
    int index = -1;
    int x;
    cout<<"Enter the Value which is finded"<<endl;
    cin>>x;
    int arr[6] = {10,20,7,11,8,4};

    for(int i = 0; i<6; i++){
      
      if(arr[i] == x){
        index = i;
        break;
      }
 

    }cout<<index;
}