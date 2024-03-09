#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the Year"<<endl;
    cin>>n;
    if(n%400 == 0 ){
        cout<<"Year is Leap"<<endl;
    }else if(n%4 && n!=100){
        cout<<"Year is Leap"<<endl;
    }
    else{
        cout<<"Year is Not Leap"<<endl;
    }
}