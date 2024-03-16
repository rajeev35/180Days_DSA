#include <iostream>
#include <string>

using namespace std;

string reverseString(const string &str) {
    string reversedStr = str;
    int length = str.length();
    for (int i = 0; i < length / 2; ++i) {
       
        char temp = reversedStr[i];
        reversedStr[i] = reversedStr[length - i - 1];
        reversedStr[length - i - 1] = temp;
    }
    return reversedStr;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    string reversedString = reverseString(inputString);

    cout << "Reversed string: " << reversedString << endl;

    return 0;
}
