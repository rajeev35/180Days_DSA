#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int rem,ans=0;

    while(num>9){

    
    while(num!=0){

        rem=num%10;
        num=num/10;
        ans=ans+rem;


    }
    num=ans;
    }
    cout<<num;
}