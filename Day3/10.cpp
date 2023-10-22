#include<iostream>
using namespace std;
int main(){
    int n,last=0,pre=1,curr;
    cout<<"Enter the valuer of number:"<<endl;
    cin>>n;
    cout<<last<<pre;
    for(int i=2;i<n;i++){
        curr=pre+last;
        cout<<curr;

        last=pre;
        pre=curr;

    }


}