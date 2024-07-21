#include<iostream>
using namespace std;
void twoDvector(int arr[][4], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j];
        }
    }
    cout<<endl;
}
int main(){

    vector< vector<int> > arr(5,vector<int>(10,-1));
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr[i].size(); j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
    
}