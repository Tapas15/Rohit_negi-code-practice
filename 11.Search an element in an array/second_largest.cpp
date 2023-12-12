//https://practice.geeksforgeeks.org/problems/second-largest3735/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>

// using namespace std;

// // } Driver Code Ends
// //User function template for C++
// class Solution{
// public:	
// 	// Function returns the second
// 	// largest elements
// 	int print2largest(int arr[], int n) {
	    
// 	    // code here
// 	    int ans = -1;
// 	    for(int i = 0; i<n; i++)
// 	    {
// 	      if(arr[i]>ans)
// 	      ans = arr[i];
	      
// 	    }
	    
// 	    // second largest 
// 	    int second = -1;
// 	    for(int i =0;i<n;i++)
// 	    {
// 	        if(arr[i]!=ans)
// 	        second = max(second,arr[i]);
	        
// 	    };
// 	    return second;
// 	}
	
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         Solution ob;
//         auto ans = ob.print2largest(arr, n);
//         cout << ans << "\n";
//     }
//     return 0;
// }

// } Driver Code Ends

//6
//12 35 1 10 34 1

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n) {

        // code here
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] > ans)
                ans = arr[i];
        }

        // second largest 
        int second = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] != ans)
                second = max(second, arr[i]);
        };
        return second;
    }

};

// { Driver Code Starts.

int main() {
    int t = 1; // Number of test cases

    // Test Case 1
    int n1 = 5;
    int arr1[] = {3, 8, 1, 4, 6};

    Solution ob;
    auto ans1 = ob.print2largest(arr1, n1);
    cout << ans1 << "\n"; // Expected output: 4

    return 0;
}
