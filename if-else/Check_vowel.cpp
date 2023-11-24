#include<iostream>
using namespace std;
int main() {
    //Vowel or not a vowel usin if else
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel";
    }
    else {
        cout << ch << " is not a vowel";
    }

}