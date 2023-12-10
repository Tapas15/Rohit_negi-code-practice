#include<iostream>
using namespace std;

void swap(int &a,int &b)//Pass by reference
{
    int c;
    c=a;
    a=b;
    b=c;
    return ;

}
void swap(float &a,float &b)//Pass by reference
{
    float c;
    c=a;
    a=b;
    b=c;
    return ;

}


int main()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    //swap
    swap(a,b);
    cout<<a<<" "<<b<<" "<<endl;
    //float
    float f1 = 4.8, f2 = 3.6;
    swap(f1,f2);
    cout<<f1<<" "<<f2<<" "<<endl;
}