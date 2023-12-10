#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(int square=1; square<=num; square++)
    cout<<square<<" Square is "<<square*square<<endl;
    
}