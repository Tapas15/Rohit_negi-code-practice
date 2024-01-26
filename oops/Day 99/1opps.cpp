#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age,roll_num;
    string grade;
    
};


int main()
{
    student s1;
    s1.name ="Rohit";
    s1.age= 10;
    s1.roll_num =21;
    s1.grade ="A";
    cout<<s1.name<<endl;
    
     student s2;
    s2.name ="Mohit";
    s2.age= 20;
    s2.roll_num =31;
    s2.grade ="B";
    cout<<s2.name<<endl;

}
