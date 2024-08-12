#include<iostream>
using namespace std;
int binaaryTodecimal(int n){
    int decimal = 0;
    int i = 0;


    while(n>0){
        int bit = n % 10;
        decimal = bit * pow(2,i++) + decimal;
        n = n/10;
    }
    return decimal;
}
int main(){
    int decimalNo;
    cout<<"Enter The Binary No"<<endl;
    cin>>decimalNo;
    cout<<binaaryTodecimal(decimalNo)<<endl;

}