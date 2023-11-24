#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;

    for(i=n; i<=n*10; i=i+n)
    {
        cout<<n<<"*"<<i/n<<"="<<i<<endl;
    }
}