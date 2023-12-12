//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

// //User function Template for C++

// void rotate(int arr[], int n)

// {
//     int last = arr[n-1];
    
//     for(int i=n-2; i>=0;i--)
//     arr[i+1] = arr[i];
//     arr[0] = last;
    
// }


//User function Template for C++

#include <iostream>

void rotate(int arr[], int n) {
    int last = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
        arr[i + 1] = arr[i];
    arr[0] = last;
}

int main() {
    // Test Case 1
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    rotate(arr1, n1);

    std::cout << "Rotated Array (Test Case 1): ";
    for (int i = 0; i < n1; i++)
        std::cout << arr1[i] << " ";
    std::cout << "\n";

    // Test Case 2
    int arr2[] = {10, 20, 30, 40, 50};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    rotate(arr2, n2);

    std::cout << "Rotated Array (Test Case 2): ";
    for (int i = 0; i < n2; i++)
        std::cout << arr2[i] << " ";
    std::cout << "\n";

    return 0;
}
