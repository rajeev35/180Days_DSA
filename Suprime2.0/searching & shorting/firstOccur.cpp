#include<iostream>
using namespace std;
int firstOccurence(int arr[], int n, int target){
    int s = 0;
    int e = n -1;
    int mid = (s+e)/2;
    int ans = -1;  // -1 esliye ki element nhi mila 

    while(s<=e){
       if(arr[mid] == target){
        ans = mid;
        e = mid -1;
       }else if(target > arr[mid]){
        s = mid + 1;
       }else if(target<arr[mid]){
        e = mid - 1;
       }

       mid = (s+e)/2;
       
    }
    return ans;
}
int main(){

    int arr[] = {10,20,30,30,30,30,40,50,60};
    int n = 9;
    int target = 30;
    int ansIndex = firstOccurence(arr,n,target);
    if(ansIndex == -1){
        cout<<"Element not found"<<endl;

    }else{
        cout<<"Element found at index "<<ansIndex<<endl;
    }

    
}