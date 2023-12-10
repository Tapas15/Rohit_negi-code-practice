#include<iostream>
using namespace std;
int main() {
    //Write a do while loop to print 1 to 10
    int sum=0;
    int count = 1;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    do{
       sum = sum + count;
        count++;

    }while(count<=num);
    cout<<sum;
}
