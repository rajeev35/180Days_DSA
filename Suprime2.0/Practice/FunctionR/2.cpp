#include<iostream>
using namespace std;
void CheckEvenOddd(int n){
    if(n%2 == 0){
        cout<<"Number is Even";
    }else{
        cout<<"Number is Odd";
    }
}
int main(){
    int n;
    cout<<"Enter The Number"<<endl;
    cin>>n;
    CheckEvenOddd(n);
    
}