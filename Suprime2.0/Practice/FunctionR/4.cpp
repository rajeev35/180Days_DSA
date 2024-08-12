#include<iostream>
using namespace std;
int sumOfEven(int n){
    int sum = 0; 
    for(int i = 0; i<=n; i++){
        if(i%2==0){
            sum = sum + i;

        }
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter The Number"<<endl;
    cin>>n;
    int result = sumOfEven(n);
    cout<<result;
    
}