#include<iostream>
using namespace std;
int main()
{
    int row ,col;
    for(row=1;row<=5;row++)
    {
        char name = 'a'+(row-1);
        for(col=row;col>=1;col--)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}