#include<iostream>
using namespace std;
//fibonachi
int main(){
    int num,i,a=0,b=1,c;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<a<<","<<b;
    for(i=2; i<=num; i++)
    {
        c=a+b;
        cout<<","<<c;
        a=b;
        b=c;
    }
}