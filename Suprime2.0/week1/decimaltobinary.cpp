#include<iostream>
using namespace std;

int decimalTobinaryMethod1(int n){

    int binaryno = 0;
    int i =0;

    while(n>0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++)  + binaryno;
        n = n/2;

    }

    return binaryno;
}
int main(){
    int n;
    cout<<"Enter The Number"<<endl;
    cin>>n;
    

    int binary = decimalTobinaryMethod1(n);

    cout<<binary<<endl;




}