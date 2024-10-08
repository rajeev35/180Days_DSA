#include<iostream>
using namespace std;

int binaryToDecimal(int n) {
    int decimal = 0;
    int base = 1;  

    while (n > 0) {
        int bit = n % 10; 
        decimal += bit * base;  
        base *= 2;  
        n /= 10;  
    }
    return decimal;
}

int main() {
    int binaryNo;
    cout << "Enter The Binary No: ";
    cin >> binaryNo;
    cout << "Decimal equivalent: " << binaryToDecimal(binaryNo) << endl;

    return 0;
}
