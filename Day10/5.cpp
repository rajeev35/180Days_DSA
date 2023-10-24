#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Entyer the Number: ";
    cin>>x;
    int num=x,rem,ans=0;
    while(num!=0){
        rem=num%10;
        num=num/10;
        ans= ans*10+rem;

    }

    if(x==ans){
        cout<<"True";

    }
    else{
        cout<<"False";

    }

}