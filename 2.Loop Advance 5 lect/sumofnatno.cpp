#include<iostream>
using namespace std;
int main(){
    int num,i,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    
    for(i=1;i<=num;i++)
    {
        sum = sum + i;
    }
    cout<<sum;
}