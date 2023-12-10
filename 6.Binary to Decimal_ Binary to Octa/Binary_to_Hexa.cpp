#include<iostream>
#include<string>
using namespace std;

int main() {
    int num = 1101; // Example binary number
    string hex = "";
    int rem, mul = 1;

    while (num > 0) {
        rem = num % 16;
        num = num / 16;

        // Convert the remainder to hexadecimal
        char hexDigit;
        if (rem < 10) { 
            hexDigit = rem + '0';
        } else {
            hexDigit = rem - 10 + 'A';
        }

        // Prepend the hexadecimal digit to the result
        hex = hexDigit + hex;
    }

    cout << hex << endl;

    return 0;
}
