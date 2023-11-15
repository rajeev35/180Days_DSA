#include<iostream>
using namespace std;

int Sum(int m, int n){

    int ans;
    ans = m+n;
    return ans;



}
int main(){
       int a,b;
       cout<<"Enter the two number "<<endl;
       cin>>a>>b;

       cout<<Sum(a,b);
}