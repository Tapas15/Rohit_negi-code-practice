#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number ";
    cin >> num;
    int mul =1,ans=0, rem;
    while (num>0)
    {
        //reminder
        rem = num%10;
        //quotient
        num = num/10;
        //ans
        ans = ans + rem*mul;
        //mul
        mul = mul*2;
    }
    cout<<ans<<endl;
    return 0;
}