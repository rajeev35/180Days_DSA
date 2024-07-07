#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;

    }
    for(int i = 2; i<=n/2; i++){
        if(n%i == 0){
            return false;

        }
    }
        return true;
}
int main(){

    int n;
    cout<<"Enter the any Number "<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<n<<"Is prime"<<endl;
    }else{
        cout<<n<<"Not prime";
    }
    

}
