#include<iostream>
using namespace std;

void fun(string);

int addition(int, int);



int main(){

    fun("Rajeev");
    int x = addition(9,8);
    cout<<x<<endl;
    return 0;

}

void fun(string name) {
        cout<<"Are you having fun "<<name<<" ?"<<"\n";
    }

    

    

int addition(int a, int b){

    int result = a+b;
    return result;
}