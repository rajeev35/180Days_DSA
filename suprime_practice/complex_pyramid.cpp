#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    

    //inverted pyramid

    for(int i = 0; i<n; i++){
        for(int j =0; j<n-i; j++){
            cout<<"*";
        }
        
        
    //full pyramid


    for(int j = 0; j<2*i+1; j++){
        cout<<" ";
    }

   
    //inverted pyramid.

     for(int j = 0; j<n-i; j++){
        cout<<"*";
    }
      cout<<endl;


    } 
     //inverted pyramid

    for(int i = 0; i<n; i++){
        for(int j =0; j<i+1; j++){
            cout<<"*";
        }
        
        
    //full pyramid


    for(int j = 0; j<2*n-2*i-1; j++){
        cout<<" ";
    }

   
    //inverted pyramid.

     for(int j = 0; j<i+1; j++){
        cout<<"*";
    }
      cout<<endl;


    } 

    
    
    

}