#include<iostream>
using namespace std;
int sumofEven(int n){
    int sum = 0;
    for(int i = 0; i<=n;i++){
        if(i%2==0){
            sum = sum + i;

        }

    }
    return sum;

}

int main(){
       int n;
       cin>>n;
       int result = sumofEven(n);
       cout<<result<<endl;
}