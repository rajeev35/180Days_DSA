// #include <iostream>

// int main() {
//     int number;

   
//     std::cout << "Enter an integer: ";
//     std::cin >> number;

    
//     if (number % 2 == 0) {
//         std::cout << number << " is even." << std::endl;
//     } else {
//         std::cout << number << " is odd." << std::endl;
//     }

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the Number"<<endl;
//     cin>>a;
//     if(a%2==0){
//         cout<<"The given Number is Even"<<endl;
//     }

//     else{
//         cout<<"The given Number is Odd"<<endl;
//     }


//     return 0;
// }


#include <iostream>

using namespace std;

int main() {
    // Declare variables to store three numbers
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Calculate the average
    double average = (num1 + num2 + num3) / 3.0;

    // Output the result
    cout << "The average of the three numbers is: " << average << endl;

    return 0;
}
