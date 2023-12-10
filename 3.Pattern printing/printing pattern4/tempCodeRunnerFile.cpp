#include<iostream>
using namespace std;
int main()
{
    int row ,col;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num-row;col++)
        {
            cout<<"  ";
        }
         for(col=1;col<=2*row-1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}