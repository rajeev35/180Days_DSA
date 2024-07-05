#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5-i-1; j++){
            cout<<" ";
        }

        for(int j = 0; j<i+1; j++){
            if(j == 0 || j == i+1-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }

        cout<<endl;
    }

    for(int i = 0; i<5; i++){
        for(int j = 0; j<i; j++){
            cout<<" ";
        }

        for(int j =0; j<5-i; j++){
            if(j ==0 || j == 5-i-1){
                cout<<"* "; 
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

