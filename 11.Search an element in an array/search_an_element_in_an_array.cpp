//https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1

// //{ Driver Code Starts
// //Initial Template for C

// #include<stdio.h>


// // } Driver Code Ends
// //User function Template for C

// int search(int arr[], int N, int X)
// {
        
//     // Your code here
//     for(int i=0; i<N; i++)
//     {
//         if (arr[i]==X)
//         return i;
//     }
//     return -1;
        
// }


// //{ Driver Code Starts.

// int main()
// {
//     int testcases;
//     scanf("%d", &testcases);
//     while(testcases--)
//     {
//         int sizeOfArray;
//         scanf("%d", &sizeOfArray);
//         int arr[sizeOfArray];
//         int x;
        
//         for(int i=0;i<sizeOfArray;i++)
//         {
//             scanf("%d", &arr[i]);
//         }
//         scanf("%d", &x);
//         printf("%d\n", search(arr,sizeOfArray,x)); //Linear search
//     }

//     return 0;
    
// }

// // } Driver Code Ends


// { Driver Code Starts
// Initial Template for C

#include <stdio.h>

// } Driver Code Ends
// User function Template for C

int search(int arr[], int N, int X)
{

    // Your code here
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == X)
            return i;
    }
    return -1;
}

// { Driver Code Starts.

int main()
{
    int testcases = 2; // Number of test cases

    // Test Case 1
    int sizeOfArray1 = 4;
    int arr1[] = {1, 2, 3, 4};
    int x1 = 3;

    printf("%d\n", search(arr1, sizeOfArray1, x1)); // Expected output: 2

    // Test Case 2
    int sizeOfArray2 = 5;
    int arr2[] = {4, 8, 2, 7, 1};
    int x2 = 5;

    printf("%d\n", search(arr2, sizeOfArray2, x2)); // Expected output: -1

    return 0;
}

// } Driver Code Ends
