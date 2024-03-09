#include<iostream>
using namespace std;
int main(){
    int num,rem,ans = 0;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    while(num>0 || ans>9){

        

        rem = num%10;
        num = num/10;
        ans = ans+rem;

        
        if(num>0 || ans>9){
            num = ans;
            ans = 0;

        }

    }


    cout<<ans;
}