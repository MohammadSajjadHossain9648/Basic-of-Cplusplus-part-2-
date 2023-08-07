#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/inheritance-in-c/
                  https://www.javatpoint.com/cpp-inheritance
                  https://www.softwaretestinghelp.com/types-of-inheritance-in-cpp/
                  https://cplusplus.com/doc/tutorial/inheritance/
                  https://tutorialspoint.dev/language/cpp/inheritance-in-c
                  https://www.scaler.com/topics/cpp/inheritance-in-cpp/
                  https://techvidvan.com/tutorials/inheritance-in-cpp/
                  https://www.educba.com/multiple-inheritance-in-c-plus-plus/
*/
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
    Male(string n, int a)
    {
        name = n;
        age = a;
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
