#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int i=0;
    while(i<=n){
        if(i%2!=0){
            cout<<i;
        }

        i++;
    }
}