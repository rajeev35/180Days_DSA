#include<iostream>
using namespace std;
bool LinearSearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if(arr[i] == target){
            return true;

        }
    }
    return false;
        
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int target = 5;
    bool result =  LinearSearch(arr,n,target);
    if(result == 1){
        cout<<"Target Found"<<endl;
    }else{
        cout<<"Target Not Found"<<endl;
    }


    
}



// #include<iostream>
// using namespace std;
// bool leanerSeaarch(int arr[], int size, int target){
//          for(int i =0; i<size; i++){
//             if(arr[i] == target ){
//                 return true;
//             }
//          }
//          return false;

//     }
// int main(){
//    int arr[5] = {1,2,3,4,5};
//    int size = 5;
//    int target = 45;
//    bool ans = leanerSeaarch(arr,size,target);
//    if(ans == 1){
//     cout<<"Found"<<" ";
//    }else{
//     cout<<"Target Not Found"<<" ";
//    }

    
//}