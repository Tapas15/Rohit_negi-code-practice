
#include<iostream>
using namespace std;
int main(){
   int num,i;
   cout<<"Enter a number: ";
   cin>>num;
   int counter = 1;
   while(counter<=num){
    if(num%counter==0)
    cout<<counter<<" ";    
}
}

