#include<iostream>
using namespace std;
/*
    before start read this two files -> access modifiers with inheritance / basic
*/
//parent class data members are public
class Human
{
public:
    string name;
    int age;

    void setName(string name)
    {
       this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};

//child class mode of inheritance is public
class Male: public Human
{
public:
    Male(string n, int a)
    {
        //Human(n, a); //show error
        setName(n);
        setAge(a);
    }

    void display()
    {
        cout<<"\nName: "<<name<<"\nAge: "<<age;
    }
};

int main()
{
    Male m("messi", 35);
    m.display();

    //output:
    //
    //    Name: Messi
    //    Age: 35
}
