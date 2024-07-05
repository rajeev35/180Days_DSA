#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        char ch;
        for(int j = 0; j<i+1; j++){

            int number  = j+1;


            ch = number + 'A'-1;
            cout<<ch;

        }



        for(char alphabet = ch; alphabet>'A'; ){
            alphabet--;
            cout<<alphabet;
        }
        cout<<endl;
    }
}