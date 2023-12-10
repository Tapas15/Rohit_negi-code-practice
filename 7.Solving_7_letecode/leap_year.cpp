//https://www.geeksforgeeks.org/problems/leap-year0943/1

//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C

int isLeap(int N){
 
 
    //code here
     if(N%400==0)
    return 1; // leap year 
    else if (N%4==0 && N%100!=0)
    return 1;// leap year 
    else
    return 0; // not a leap year 
    

    
    
    
}

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cout<< "Enter Leap year: ";
    scanf("%d", &t);
    while(t--)
    {
        int N;
        scanf("%d", &N);
        printf("%d\n", isLeap(N));
    }
    return 0; 
}
// } Driver Code Ends