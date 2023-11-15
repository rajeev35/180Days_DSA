#include<iostream>
using namespace std;

void Swap(int &a, int &b ){
        int c;
        c = a;
        a = b;
        b = c;

    }
int main(){

   

    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<" "<<b<<" ";
}