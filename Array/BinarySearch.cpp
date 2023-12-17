#include<iostream>
using namespace std;

int BinarySearch(int n, int arr[], int key){

    int start = 0;
    int end = n-1;
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;

        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }



    }

    return -1;



}
int main(){
    int arr[1000];
    int n;
    
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    
    cout<<"Enter the elemant"<<endl;
    for(int i =0;i<n;i++)
    cin>>arr[i];
    int key;
    cout<<"Enter the key"<<endl;  
    cin>>key; 
    cout<<BinarySearch(n,arr,key);

    return 0;


    
}