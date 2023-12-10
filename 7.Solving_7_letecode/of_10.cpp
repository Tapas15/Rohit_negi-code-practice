//https://leetcode.com/problems/complement-of-base-10-integer/

#include <iostream>
using namespace std;

// Your function definition here
class Solution {
public:
    int bitwiseComplement(int n) {
        int ans = 0 ,mul=1,rem;
        if(n==0)
        return 1;
        while(n)
        {
            rem = n%2;
            rem = rem^1;
            n/=2;
            ans = ans+rem*mul;
            mul*=2;

        };
        return ans;
        
    }
};

int main() {
    // Create an object of Solution class
    Solution sol;

    // Test some input values
    cout << "Bitwise complement of 5 is " << sol.bitwiseComplement(5) << endl;
    cout << "Bitwise complement of 0 is " << sol.bitwiseComplement(0) << endl;
    cout << "Bitwise complement of 10 is " << sol.bitwiseComplement(10) << endl;

    return 0;
}

