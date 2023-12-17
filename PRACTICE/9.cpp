#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;

    if(n%400==0){
        cout<<"Leap year"<<endl;
    }
    else if(n%4==0&&n%100!=0){
        cout<<"leap year"<<endl;
    }
    else{
        cout<<" not a Leap year"<<endl;
    }
}