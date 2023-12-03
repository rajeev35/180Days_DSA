// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"ENTER THE VALUE OF A AND B"<<endl;
//     cin>>a>>b;
//     c=a;
//     a=b;
//     b=c;

//     cout<<"a:"<<a<<endl;
//     cout<<"b:"<<b<<endl;
// }



#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"eNTER THE VALUE OF A and b"<<endl;

    cin>>a>>b;


    a = a+b;

    b = a-b;
    a = a-b;

    cout<<"a:"<<a<<endl;

    cout<<"a:"<<b<<endl;

    
}