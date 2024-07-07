#include<iostream>
using namespace std;

// void printMax(int num1, int num2, int num3){
//     if(num1>num2 && num1>num3){
//         cout<<"Max is "<<num1<<endl;
//     }else if(num2>num1 && num2>num3){
//         cout<<"Max is "<<num2<<endl;
//     }else{
//         cout<<"Max is "<<num3<<endl;
//     }
// }

// void printMax(int n1, int n2, int n3){
//     int ans = max(n1,n2);
//     int finalans = max(ans,n3);
//     cout<<"Max is  "<<finalans<<endl;
// }

int printMax(int n1, int n2, int n3){
    int ans = max(n1,n2);
    int finalans = max(ans,n3);
    // cout<<"Max is  "<<finalans<<endl;
    return finalans;

}
int main(){
   int result =  printMax(1000,80,45);
   cout<<"Max is "<<result<<endl;


}