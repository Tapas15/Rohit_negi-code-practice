//https://leetcode.com/problems/power-of-two/description/

// C++ example

// Include the necessary libraries
#include <iostream>
using namespace std;

// Define the Solution class
class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n<1)
        return 0;

        while(n!=1)
        {
            if(n%2==1)
            return 0;

            n = n/2;
        }
        return 1;
        
    }
};

// Driver code
int main() {
    // Create an object of the Solution class
    Solution sol;
    // Test some input values
    int test_cases[] = {1, 4, 16,3};
    // Loop through the test cases
    for (int num : test_cases) {
        // Print the input and the output
        cout << "Input: " << num << endl;
        cout << "Output: " << sol.isPowerOfTwo(num) << endl;
        cout << endl;
    }
    return 0;
}
