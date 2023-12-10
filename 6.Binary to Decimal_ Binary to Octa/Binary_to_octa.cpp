#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number ";
    cin >> num;

    int mul = 1, ans = 0, rem;

    while (num > 0)
    {
        // remainder
        rem = num % 8;
        // quotient
        num = num / 8;
        // ans
        ans = ans + rem * mul;
        // mul
        mul = mul * 10;
    }

    cout << ans << endl;
    return 0;
}
