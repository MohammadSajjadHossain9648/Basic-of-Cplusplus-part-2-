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

    Human(string name, int age): name(name), age(age){}
    /* without initialize list
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    */
};

//child class mode of inheritance is public
class Male: public Human
{
public:
    //initialize list
    Male(string name, int age) : Human(name, age){}

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
