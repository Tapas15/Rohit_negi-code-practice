//https://leetcode.com/problems/palindrome-number/description/

#include <iostream>
using namespace std;

// Your function definition here
class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
        return 0;
        
        int num =x, rem , ans = 0;
        while(num)
        {
            rem = num%10;
            num/=10;
            ans = ans*10+rem; 
        };
        if(ans==x)
        return 1;
        else 
        return 0;


    }
};

int main() {
    // Create an object of Solution class
    Solution sol;

    // Test some input values
    cout << "Is 121 a palindrome? " << sol.isPalindrome(121) << endl;
    cout << "Is -121 a palindrome? " << sol.isPalindrome(-121) << endl;
    cout << "Is 123 a palindrome? " << sol.isPalindrome(123) << endl;
    cout << "Is 0 a palindrome? " << sol.isPalindrome(0) << endl;

    return 0;
}
