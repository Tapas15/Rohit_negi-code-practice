#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age,roll_num;
    string grade;
    //Create Function getter and setter 
    public:
    void setname(string s)
    {
        if(s.size()==0)
        {
            cout<<"invalid name:"<< endl;
            return;
        }
        name = s;
    }

    void setage(int a)
{
    if (a < 0 || a > 100)
    {
        cout << "invalid age:" << endl;
        return;
    }
    age = a;
}

    void setroll_num(int b)
    {
        roll_num = b;
    }

    void setgrade(string g)
    {
        grade = g;
    }
    
    void getname()
    {
        cout<<name<<endl;
    }

    int getroll_num()
    {
        return  roll_num;
    }
    string getgrade(int pin)
    {
        if(pin==123)
        return grade;
        
        return "Invalid pin";
        
        

    }
};


int main()
{
    student s1;
    s1.setname("");
    s1.setage(101);
    s1.setroll_num(21);
    s1.setgrade("A");
    s1.getname();
    cout<<s1.getroll_num()<<endl;
    cout<<s1.getgrade(123)<<endl;
}