#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the element"<<endl;
    for(int i = 0;i<n;i++){
    
    
      cin>>arr[i];
    
     }

     int size = sizeof(arr)/sizeof(arr[0]);
     sort(arr,arr+n);

     int mid = n/2;
     reverse(arr+mid,arr+n);

     for(int i = 0;i<n;++i){
        cout<<arr[i];
     }

}