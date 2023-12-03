// binary to decimal


#include<iostream>
using namespace std;
int main(){
    int n;
    int rem, ans=0,mul=1;


    cout<<"Enter the Binary number "<<endl;

    cin>>n;
    while(n!=0){
        rem = n%10;
        n = n/10;
        ans = rem*mul+ans;
        mul = mul*2;

    }

    cout<<ans<<endl;
}