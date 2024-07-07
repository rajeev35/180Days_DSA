#include<iostream>
using namespace std;
// void counting(int n){
//     for(int i = 1; i<=n; i++){
//         cout<<i<<endl;
//     }
// }

int  counting(int n){
   
    for(int i = 1; i<n; i++){
        cout<<i<<endl;
        
    }
    return n;
}
int main(){
    int n;
    cin>>n;

    int result = counting(n);

    cout<<result<<endl;

}