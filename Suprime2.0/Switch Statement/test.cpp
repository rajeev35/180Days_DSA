#include<iostream>
using namespace std;
int main(){




    float a,b;
    cout<<"Enter The Value of a and b :- "<<endl;
    cin>>a>>b;
    int op;
    cout<<"What You Want to do? "<<endl;
    cin>>op;

    float ans = 0; 

    switch(op){
        case 1:
        ans = a+b;
        break;
        case 2:
        ans = a-b;
        break;
        case 3:
        ans = a*b;
        break;
         case 4:
        ans = a/b;
        break;

        default:
        cout<<"Inviled Operation"<<endl;

        return 0;
    }

    cout<<ans;

    // if(op == 0){
    //     ans =a+b;

    // }else if(op==1){
    //     ans = a-b;

    // }
        

    // else if(op == 2){
    //     ans = a*b;

    // }else if(op == 3){
    //     ans = a/b;

    // }else{
    //     cout<<"Inviled Operation"<<endl;
    // }

    // cout<<ans<<endl;


   



}