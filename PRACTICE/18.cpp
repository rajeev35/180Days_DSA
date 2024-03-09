#include<iostream>
using namespace std;


int factorial(int n){
    int ans = 1;

    for(int i =1;i<=n; i++){
        ans = ans*i;
    }
    return ans;
}

int main(){


    int number;
    cout<<"Enter the Number"<<endl;
    cin>>number;


    cout<<"Number is Factorial"<<factorial(number)<<endl;

    





}
