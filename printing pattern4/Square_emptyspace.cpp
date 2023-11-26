#include<iostream>
using namespace std;
int main()
{
    int row ,col;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for(row=num;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
         for(col=1;col<=2*num-(2*row);col++)
        {
            cout<<"  ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
         for(col=1;col<=2*num-(2*row);col++)
        {
            cout<<"  ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}