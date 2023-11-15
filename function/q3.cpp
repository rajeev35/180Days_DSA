#include<iostream>
using namespace std;

bool Prime(int n){
    if(n<2){
        return 0;

    }
    for(int i = 2;i<=n;i++){

        if(i%2==0){
            return 0;
        }

    }
    return 1;
}

int Fact(int n){
    int ans = 1;
    for (int i= 1;i<=n; i ++){
        ans = ans*i;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    // p rime

    int ans = Prime(a);
    cout<<ans;
    cout<<endl;

    // Factorial

    int ans2 = Fact(a);
    cout<<ans2;
    cout<<endl;

    cout<<Prime(b);
    cout<<endl;
    cout<<Fact(b);
    cout<<endl;
    cout<<Prime(b-a);
    cout<<endl;
    cout<<Fact(b-a);


    
}