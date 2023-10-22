#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=5;row>=1;row--){
        for(col=1;col<=9-(2*row-1)/2;col++){

            cout<<" ";
        }

        for(col=1;col<=2*row-1;col++){

            cout<<"*";
        }

        cout<<endl;
    }
}