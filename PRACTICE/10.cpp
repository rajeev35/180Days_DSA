#include<iostream>
using namespace std;
int main(){
    int n;
     int rem,ans=0,mul = 1;

    
    cout<<"Enter the Number"<<endl;
    cin>>n;

    while(n!=0){
       
        rem = n%2;
        n=n/2;
        rem = rem^1;
        
        ans = rem*mul+ans;
        mul = mul*10;

    }
    cout<<ans;

}