#include<iostream>
using namespace std;

bool Prime(int n)
{
    if(n<2)
    return 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
    
}
int Fact(int n)
{
    int ans =1;
    for(int i=1;i<=n;i++)
    ans = ans*i;
    return ans;
}
int main() {
    int a,b;
    cout<<"Enter the numbers :";
    cin>>a>>b;
    //A is prime or not
    cout<<Prime(a)<<endl;
    //Factorial of A 
    cout<<Fact(a)<<endl;
    //B is prime or not 
    cout<<Prime(b)<<endl;
    //Factorial of B
    cout<<Fact(b)<<endl;
    //B-A is prime or not 
    cout<<Prime(b-a)<<endl;
    //Factorial of B-A
    cout<<Fact(b-a)<<endl;



    
}