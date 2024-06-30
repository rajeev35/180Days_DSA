#include<iostream>
using namespace std;

int decimalToBinary(int n){

    int binary = 0;
    int i = 0;

    while(n>0){
        // int bit = n%2;

        //  binary = bit*pow(10, i++)+binary;
    
        // n = n/2;

        int bit  = (n&1);
        binary = bit*pow(10, i++)+binary;
        n = n >> 1;

    }
    return binary;
}
int main(){
    int n;
    cout<<"Enter The Number"<<endl;
    cin>>n;

    int binary = decimalToBinary(n);
    cout<<binary<<endl;
}