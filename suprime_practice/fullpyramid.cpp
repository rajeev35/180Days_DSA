// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0; i<5; i++){
//         for(int j =0;j<5-i-1; j++){
//             cout<<" "<<" ";

            
//         }

//         for(int j = 0; j<i+1; j++){
//             cout<<"* "<<" ";
//         }
        

        

//         cout<<endl;
//     }
// }








#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }

        for(int j = 0; j<i+1; j++){
            cout<<"* ";
        }

        cout<<endl;
    }
}