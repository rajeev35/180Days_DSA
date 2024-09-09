#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size -1;
    int mid = (left+right)/2;

    while (left <= right)
    {

        
        /* code */
        

        if(arr[mid] == target){
            return mid;
        }else if(target > arr[mid]){
            left = mid + 1;
        }else if(target < arr[mid]){
            right = mid - 1;
        }

        mid = (left+right)/2;

    }


    return -1;
    



}
int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int target  = 90;
    int size = 9;
    int ansIndex = binarySearch(arr,size,target);
    

    if(ansIndex == -1){
        cout<<"Element Not found"<<" ";
    }else{
        cout<<"Element found at "<<ansIndex<<endl;
    }
    

    return 0;

}

// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int target){
//     int left = 0;
//     int right = size - 1;
//     int mid = (left + right) / 2;

//     while (left <= right) {
//         if (arr[mid] == target) {
//             return mid;
//         } else if (target > arr[mid]) {
//             left = mid + 1;
//         } else if (target < arr[mid]) {
//             right = mid - 1;
//         }
//         mid = (left + right) / 2;
//     }

//     return-1;
// }

// int main(){
//     int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//     int target = 90;
//     int size = 9;
//     int ansIndex = binarySearch(arr, size, target);

//     if (ansIndex == -1) {
//         cout << "Element Not found" << endl;
//     } else {
//         cout << "Element found at " << ansIndex << endl;
//     }

//     return 0;
// }



