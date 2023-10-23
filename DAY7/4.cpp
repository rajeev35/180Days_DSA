#include<iostream>
using namespace std;
int main(){
    char name='a';
    cout<<"Enter the Charecter"<<endl;

    cin>>name;
    if(name=='a' || name=='e' || name=='i' || name=='o' || name=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonent";
    }
}