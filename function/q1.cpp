// #include<iostream>
// using namespace std;

// int Sum(int m, int n){

//     int ans;
//     ans = m+n;
//     return ans;



// }
// int main(){
//        int a,b;
//        cout<<"Enter the two number "<<endl;
//        cin>>a>>b;

//        cout<<Sum(a,b);
// }



#include<iostream>
using namespace std;


int Sum(int n,int m){
    int ans;
    ans  = m + n;
    return ans;
}
int main(){

    int a,b;
    cout<<"Enter The First Number"<<endl;
    cin>>a;
    cout<<"Enter the Second  Number"<<endl;
    cin>>b;

    cout<<Sum(a,b);

}