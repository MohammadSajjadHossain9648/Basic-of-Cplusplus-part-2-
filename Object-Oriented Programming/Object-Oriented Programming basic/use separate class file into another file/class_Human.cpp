#include<iostream>
using namespace std;

class Human
{
public:
    //object properties/state which we can say as data member
    string gender;
    string name;
    int age;
    double height;


    //object behavior which we can say as member function
    void walk()
    {
        cout<<"\n"<<name<<" can walk.";
    }
    void run()
    {
        cout<<"\n"<<name<<" can run.";
    }
    void eat()
    {
        cout<<"\n"<<name<<" can eat.";
    }

};

