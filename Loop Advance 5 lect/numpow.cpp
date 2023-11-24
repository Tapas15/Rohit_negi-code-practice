#include<iostream>
using namespace std;
int main(){
    int n,pow,i,num;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>pow;

    num = n;
    for(i=0; i<=pow; i=i+3)
    {
       num = num*n;
    }
    cout<<num;
}