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
         for(char name = 'A';name<='A'+row-1;name++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}