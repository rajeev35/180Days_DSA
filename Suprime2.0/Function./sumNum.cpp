#include<iostream>
using namespace std;
int sumNum(int n){
    int sum = 0;
    for(int i = 0; i<=n; i++ ){
        sum = sum + i;
    }
    return sum;
}
int main(){

    int n;
    cin>>n;
    int result = sumNum(n);
    cout<<result<<endl;

}