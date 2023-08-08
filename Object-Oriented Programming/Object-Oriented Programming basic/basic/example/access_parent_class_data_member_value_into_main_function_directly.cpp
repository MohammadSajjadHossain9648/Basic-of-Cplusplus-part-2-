#include<iostream>
using namespace std;
/*
    before start read this two files -> access modifiers with inheritance / basic
*/
//parent class data members are public
class Human
{
public:
    string name = "Messi";
    int age = 35;
};

//child class mode of inheritance is public
class Male: public Human
{
public:

};

int main()
{
    Male m;

    cout<<"\nName: "<<m.name;
    cout<<"\nAge: "<<m.age;

    //output:
    //
    //    Name: Messi
    //    Age: 35

    /*
    here, parent class data members are public and mode of inheritance is public(class Male: public Human)
    so that, in main function, we can directly access the Human class or parent class data members.
    */
}
