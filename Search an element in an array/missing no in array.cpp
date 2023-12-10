//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
