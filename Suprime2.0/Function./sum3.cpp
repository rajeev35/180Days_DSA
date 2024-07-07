#include<iostream>
using namespace std;
void  printSum(int a, int b, int c){
    
    int ans = a + b + c;

    cout<<ans<<endl;
    
}
int main(){
    int a,b,c;
    cout<<"Enter The Three Number "<<endl;
    cin>>a>>b>>c;

    printSum(a,b,c);

    


    
}