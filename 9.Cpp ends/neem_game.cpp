//https://leetcode.com/problems/nim-game/description/

#include <iostream>
using namespace std;

// Your function definition here
class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0)
        return 0;
        else
        return 1;
        
    }
};

int main() {
    // Create an object of Solution class
    Solution sol;

    // Test some input values
    cout << "Can you win Nim with 5 stones? " << sol.canWinNim(4) << endl;
    cout << "Can you win Nim with 4 stones? " << sol.canWinNim(1) << endl;
    cout << "Can you win Nim with 7 stones? " << sol.canWinNim(2) << endl;

    return 0;
}
