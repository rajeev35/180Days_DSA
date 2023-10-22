#include<iostream>
using namespace std;
int main(){
    int n,pow,num;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    cout<<"Enter the Power"<<endl;
    cin>>pow;

    num=n;
    for(int i=1;i<pow;i++){
        num=num*n;

    }
    cout<<num;


}