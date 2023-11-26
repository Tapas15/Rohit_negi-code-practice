#include<iostream>
using namespace std;
int main() {
    //Vowel using or operator a e i o u and rest are consonant using if else
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    cout<<"Vowel";
    else
    cout<<"Consonant";
    return 0;
    

    


}
