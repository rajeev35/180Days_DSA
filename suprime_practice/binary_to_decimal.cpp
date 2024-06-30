#include<iostream>
using namespace std;


int binaryTodecimal(int n){
    int decimal = 0;
    int i  = 0;


    while(n>0){
        int bit = n%10;
        decimal = decimal+bit*pow(2,i++);
        n = n/10;

    }

    return decimal;
}
int main(){
    int n;
    cout<<"Enter The Number: "<<endl;
    cin>>n;

    cout<<binaryTodecimal(n);

}