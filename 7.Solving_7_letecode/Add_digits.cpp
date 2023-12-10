//https://leetcode.com/problems/add-digits/
// The driver code is a piece of code that tests the functionality of another code, such as a function or a class. It usually provides some input values and prints the output or the result of calling the code.

// For the LeetCode problem "Add Digits" in C++, the driver code may look something like this:

// ```c++
// C++ example

// Include the necessary libraries
#include <iostream>
using namespace std;

// Define the Solution class
class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
            int ans = 0, rem;
            while (num != 0) {
                rem = num % 10;
                num /= 10;
                ans += rem;
            }
            num = ans;
        }
        return num;
        
    }
};

// Driver code
int main() {
    // Create an object of the Solution class
    Solution sol;
    // Test some input values
    int test_cases[] = {38, 0, 123, 999, 2023};
    // Loop through the test cases
    for (int num : test_cases) {
        // Print the input and the output
        cout << "Input: " << num << endl;
        cout << "Output: " << sol.addDigits(num) << endl;
        cout << endl;
    }
    return 0;
}
