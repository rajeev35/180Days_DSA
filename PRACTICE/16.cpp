#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    int rem, ans = 0;

    while(n){

    

    rem = n%10;
    n = n/10;
    ans = ans*10+rem;

    }

    cout<<ans;

}