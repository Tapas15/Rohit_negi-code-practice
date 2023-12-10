// C++ example

// Include the necessary libraries
#include <iostream>
#include<limits.h>
using namespace std;

// Define the Solution class
class Solution {
public:
    int reverse(int x) {
        int ans = 0, rem;
        while (x != 0) {
            rem = x % 10;
            x /= 10;

            // Check for overflow
            if(ans > INT_MAX/10 || ans < INT_MIN/10)
            return 0;
            ans = ans * 10 + rem;
        }
        return ans;
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
        cout << "Output: " << sol.reverse(num) << endl;
        cout << endl;
    }
    return 0;
}
