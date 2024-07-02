// #include<iostream>
// using namespace std;
// int main(){

//     for(int i = 0; i<5; i++){
//         for(int j = 0; j<5; j++){
//             if(i ==0 || i == 4){
//                 cout<<"* ";

//             }else{
//                 if(j == 0 || j == 4){
//                     cout<<"* ";
//                 }else{
//                     cout<<" ";
//                 }
//             }
//         }

//         cout<<endl;
//     }

//     return 0;

// }


#include<iostream>
using namespace std;

int main() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if (i == 0 || i == 4) {
                cout << "* ";
            } else {
                if (j == 0 || j == 4) {
                    cout << "* ";
                } else {

                    // make sure there are two spaces.
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
    

//     for(int i = 0; i < 5; i++) {
//         for(int j = 0; j < 5; j++) {
//             if (i == 0 || i == 5 - 1) {
//                 // First or last row
//                 cout << "* ";
//             } else {
//                 // Other rows
//                 if (j == 0 || j == 5 - 1) {
//                     // First or last column in the middle rows
//                     cout << "* ";
//                 } else {
//                     // Inner space
//                     cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
