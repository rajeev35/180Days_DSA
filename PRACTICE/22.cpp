// #include<iostream>
// using namespace std;
// int main(){

//     int arr[5] = {4,6,8,2,7};

//     int ans = INT_MAX;

//     for(int i=0;i<5;i++){
//         if(arr[i]<ans){
//             ans = arr[i];
//         }

        
//     }cout<<ans;



    


// }



#include<iostream>
using namespace std;

int findMinimum(int arr[],int size){
    int ans = INT_MAX;
    for(int i = 0; i<size; i++){

        if(arr[i]<ans){
            ans = arr[i];
        }
         
    }return ans;
    
}
int main(){

    int arr[5]={2,5,3,7,1};

    int minValue =  findMinimum(arr,5);
    cout<<"The Minimum Value of Given Array is "<<minValue<<endl;


    return 0;

}