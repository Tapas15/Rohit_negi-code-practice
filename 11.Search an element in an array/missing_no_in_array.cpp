//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
// //{ Driver Code Starts
// // Initial template for C++

// #include <bits/stdc++.h>
// using namespace std;




// // } Driver Code Ends
// // User function template for C++
// // User function template for C++

// class Solution{
//   public:
//     int missingNumber(vector<int>& array, int n) {
//         // Your code goes here
        
//         //sum of all element in array
//         int sum = 0;
//         for(int i=0; i<n-1; i++)
//         sum += array[i];
//         //sum of n number 
        
//         int ans = n*(n+1)/2;
        
//         return ans-sum;
        
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> array(n - 1);
//         for (int i = 0; i < n - 1; ++i) cin >> array[i];
//         Solution obj;
//         cout << obj.missingNumber(array, n) << "\n";
//     }
//     return 0;
// }
// // } Driver Code Ends


// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
// User function template for C++

class Solution {
public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here

        // sum of all elements in array
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
            sum += array[i];

        // sum of n numbers
        int ans = n * (n + 1) / 2;

        return ans - sum;
    }
};

// { Driver Code Starts.

int main() {
    int t = 2; // Number of test cases

    // Test Case 1
    int n1 = 5;
    vector<int> array1 = {2, 4, 1, 5};
    Solution obj1;
    cout << obj1.missingNumber(array1, n1) << "\n"; // Expected output: 3

    // Test Case 2
    int n2 = 5;
    vector<int> array2 = {1, 2, 3, 5};
    Solution obj2;
    cout << obj2.missingNumber(array2, n2) << "\n"; // Expected output: 4


    return 0;
}
