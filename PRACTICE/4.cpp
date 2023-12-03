#include<iostream>
using namespace std;
int main(){
    int n,rem,rev=0,k;
    cout<<"Enter the Number"<<endl;


    cin>>n;


    k = n;
    while(n>0){
        rem =n%10;
        rev = rev*10+rem;
        n = n/10;
    }

    if(rev == k){
        cout<<"Number is plandrome"<<endl;
    }

    cout<<"Number is not plandrome"<<endl;
}