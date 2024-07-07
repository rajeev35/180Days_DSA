#include<iostream>
using namespace std;

int addSum(int a, int b){
    int sum = a + b;
    return sum;
}
int main(){

    int a,b;
    cout<<"Enter the Value of A and B "<<endl;
    cin>>a>>b;
    int result = addSum(a,b);

    cout<<"Sum of The Given Number is "<<result<<endl;

    
}