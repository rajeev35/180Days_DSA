#include<iostream>
using namespace std;

int sum(int a,int b){
    int ans;
    ans = a+b;

    return ans;
}
int main(){

    int n,m;
    cout<<" Enter the Value of n and m"<<endl;
    cin>>n>>m;
    cout<<sum(n,m);
    
}