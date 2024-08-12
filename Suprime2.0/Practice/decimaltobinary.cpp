#include<iostream>
using namespace std;
int DecimalToBinary(int n){
    int binaryNo = 0;
    int i = 0;


    while(n>0){
        int bit = n%2;
        binaryNo = bit * pow(10,i++)+binaryNo;
        n = n/2;

    }
    return binaryNo;
}
int main(){
    int binaryNo;
    cout<<"Enter the Decimal Number"<<endl;
    cin>>binaryNo;
    cout<<DecimalToBinary(binaryNo)<<endl;

}