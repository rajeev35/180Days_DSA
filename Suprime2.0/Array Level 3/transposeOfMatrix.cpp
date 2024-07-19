#include<iostream>
using namespace std;
void transpose(int arr[][4], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = i; j<row; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
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
     cout<<"printing the Transpose"<<endl;
     
     transpose(arr,row,col);
     for (int i = 0; i < 4; i++) {
        for (int j = 0; j < row; j++) { // Should be row now because of transposition
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
    
