#include<iostream>
using namespace std;

void Prime(int n)
{
    if(n<2)
    {cout<<0<<endl;
    return ;
    }
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<0<<endl;
            return ;
        }
       
    }
    cout<<1<<endl;
    return ;
    
}
int Fact(int n=3)
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
    cout<<Fact();
    cout<<endl;
    //A is prime or not
    Prime(a);
    //Factorial of A 
    Fact(a);
    //B is prime or not 
    Prime(b);
    //Factorial of B
    Fact(b);
    //B-A is prime or not 
    Prime(b-a);
    //Factorial of B-A
    Fact(b-a);



    
}