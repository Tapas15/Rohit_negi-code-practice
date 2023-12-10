#include<iostream>
using namespace std;
int main()
{
    //even odd 
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num % 2 == 0) {
        cout << num << " is even";
    }
    else {
        cout << num << " is odd";
    }
    return 0;
    
}
    
