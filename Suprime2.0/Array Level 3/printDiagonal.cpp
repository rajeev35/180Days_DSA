#include<iostream>
using namespace std;
void printDiagonal(int arr[][4], int row, int col){
    for(int i = 0; i<=row; i++){
        cout<<arr[i][i]<<" ";
    }
}
int main(){
     int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,101,12},
        {13,14,15,16}
     };
     int row = 3;
     int col = 4;
     printDiagonal(arr,row,col);

}