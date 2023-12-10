#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
    float f1=4.8, f2=3.6;
    swap(f1,f2);
    cout<<f1<<" "<<f2;
}