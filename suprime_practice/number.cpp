#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number "<<endl;
    cin>>n;

    if(n == 0){
        cout<<"Number is Zero "<<endl;

    }
    else if(n > 0){
        cout<<"Number is Positive"<<endl;


    }

    else if(n<0){
        cout<<"Number is negative"<<endl;
    }

    else{
        cout<<"Mujhe nhi pata "<<endl;
        
    }
}