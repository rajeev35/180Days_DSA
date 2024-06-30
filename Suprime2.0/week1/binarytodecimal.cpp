#include<iostream>
using namespace std;

int binarytodecimal(int n){

    int decimal  = 0;
    int i = 0;

    while(n>0){
        int bit = n%10;
        decimal += bit*pow(2, i++);

        
        n = n/10;

    }
    return decimal;
}
int main(){
    int binaryno;
    cout<<"Enter The Binary No:"<<endl;
    cin>>binaryno;

    cout<<binarytodecimal(binaryno);

}