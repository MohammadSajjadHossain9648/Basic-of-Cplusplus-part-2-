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
};

//child class mode of inheritance is public
class Male: public Human
{
public:
    void display()
    {
        cout<<"\nName: "<<name<<"\nAge: "<<age;
    }
};

int main()
{
    Male m;
    m.name = "Messi";
    m.age = 35;

    m.display();

    //output:
    //
    //    Name: Messi
    //    Age: 35
}
