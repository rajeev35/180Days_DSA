#include<iostream>
using namespace std;

void Swap(int a,int b){
    int c; 

    c=a;
    a = b;
    b = c;
}
int main(){

    int m,n;
    cout<<"Enter the valur of a and b"<<endl;
    cin>>m>>n;
    swap(m,n);
    cout<<m<<n;


}