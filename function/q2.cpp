#include<iostream>
using namespace std;

int Avg(int p, int q, int r){
    int ans;
    ans = (p + q + r) / 3;

    return ans;
}
int main(){
    int a,b,c;
    cout<<"Enter the three number "<<endl;

    cin>>a>>b>>c;
    cout<<Avg(a,b,c);
}