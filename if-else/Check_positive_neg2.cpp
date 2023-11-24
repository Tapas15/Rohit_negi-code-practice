#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(number > 0) {
        cout << number << " is positive\n";
    }
    else if(number == 0) {
        cout << number << " is zero\n";
    }
    else {
        cout <<" Negative\n";
    }

    return 0;
}