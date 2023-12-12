#include<iostream>
using namespace std;

void fun(int a[],int n)
{
    cout<<sizeof(n)<<endl; 
    for(int i =0;i<n;i++)
    cout<<a[i]<< " ";
    return ;
}

int main()
{
    int arr[5] = {3,4,1,6,7};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);
} 