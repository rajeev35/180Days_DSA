#include<iostream>
using namespace std;

int sumThree(int a, int b, int c){
    int ans = a + b +c;
    return ans;
}
int main(){
    int a,b,c;
    cout<<"Enter the valu of Three Number "<<endl;
    cin>>a>>b>>c;
    
     int result = sumThree(a,b,c);

     cout<<result<<endl;


    return 0;
    
}