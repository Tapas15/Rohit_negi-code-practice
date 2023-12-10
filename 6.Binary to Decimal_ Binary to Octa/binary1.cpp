#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number ";
    cin >> num;
    int rem, ans =0,mul=1;
    while (num>0)
    {
        //reminder
        rem = num&1;
        //quotient
        num = num/2;
        //ans
        ans = ans + rem*mul;
        //mul
        mul = mul*10;
    }
    cout<<ans<<endl;
}    