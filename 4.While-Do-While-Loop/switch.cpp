#include<iostream>
using namespace std;
int main()
{
    //Write switch statement
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    switch(num){
        case 1:
            cout<<"One";
            break;
        case 2:
            cout<<"Two";
            break;
        case 3:
            cout<<"Three";
            break;
        case 4:
            cout<<"Four";
            break;
        case 5:
            cout<<"Five";
            break;
        case 6:
            cout<<"Six";
            break;
        case 7:
            cout<<"Seven";
            break;
        case 8:
            cout<<"Eight";
            break;
        case 9:
            cout<<"Nine";
            break;
        case 10:
            cout<<"Ten";
            break;
        default:
            cout<<"Invalid number";
            break;
    }
}