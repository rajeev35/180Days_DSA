#include<iostream>
using namespace std;
int SumUptoN(int n){
    int sum = 0; 
    for(int i = 0; i<=n;i++){
        sum = sum + i;

    }
    return sum;

}
int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    int ressult = SumUptoN(n);
    cout<<ressult;

}