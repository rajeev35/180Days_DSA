#include<iostream>
using namespace std;
void sumOfDiagonal(int arr[][4], int row, int col){
    int sum = 0;
    for(int i = 0; i<row; i++){
        sum = sum + arr[i][i];
        

    }
    cout<<sum;
}
int main(){
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,101,12},
        {13,14,15,16}
     };
     int row = 4;
     int col = 4;
     sumOfDiagonal(arr, row, col);

}
