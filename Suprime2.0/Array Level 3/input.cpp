#include<iostream>
using namespace std;
// void printArray(int arr[][4], int row, int col){
//     for(int i =0; i<row; i++)
//     for(int j = 0; j<col; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;

// }
int main(){

    int arr[3][4];
    int row = 3;
    int col = 4;
    for(int  i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"Enter the value of row index "<<i<<"column index "<<j<<endl;
            cin>>arr[i][j];

        }
    }

    // printArray(arr,row,col);


}