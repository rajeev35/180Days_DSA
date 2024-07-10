#include<iostream>
using namespace std;
int incrementBy1(int &k){
    k = k * 6;
    return k;
    
}
int main(){
    int n;
    cin>>n;
    int result = incrementBy1(n);
    cout<<result<<endl;

}

