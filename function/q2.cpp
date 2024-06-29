// #include<iostream>
// using namespace std;

// int Avg(int p, int q, int r){
//     int ans;
//     ans = (p + q + r) / 3;

//     return ans;
// }
// int main(){
//     int a,b,c;
//     cout<<"Enter the three number "<<endl;

//     cin>>a>>b>>c;
//     cout<<Avg(a,b,c);
// }



#include<iostream>
using namespace std;


int Avg(int a,int b,int c){
int ans = (a+b+c)/3;
return ans;

}

int main(){

    int p,q,r;
    cout<<"Enter the First Number"<<endl;
    cin>>p;
     cout<<"Enter the second Number"<<endl;
    cin>>q;
     cout<<"Enter the third Number"<<endl;
    cin>>r;

    cout<<Avg(p,q,r);


}
