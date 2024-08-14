#include<iostream>
using namespace std;
void ZeroOneCount(int arr[], int size){
    int zeroCount = 0;
    int OneCount = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }else if(arr[i] == 1){
            OneCount++;
        }
    }
    cout<<"ZeroCount is "<<zeroCount<<endl;
    cout<<"OneCount is "<<OneCount<<endl;

}
int main(){
    int arr[10] = {1,0,1,0,1,1,1,1,0,1};
    int size = 10;
    ZeroOneCount(arr,size);
    

}