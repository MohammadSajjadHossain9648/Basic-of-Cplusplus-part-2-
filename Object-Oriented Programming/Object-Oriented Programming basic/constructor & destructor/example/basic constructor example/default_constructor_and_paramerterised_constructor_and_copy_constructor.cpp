#include<iostream>
using namespace std;

class Hero
{
private:
    int health;
    char level;

public:
    //Default Constructor
    Hero()
    {
        cout<<"\nDefault constructor called"<<endl;
    }

    //Paramerterised Constructor
    Hero(int health, char level)
    {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero& temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout<<"\n\nhealth: "<<this->health;
        cout<<"\nlevel: "<<this->level;
        cout<<endl<<endl;
    }
};

int main()
{
    //Default Constructor
    Hero a;


    //Paramerterised Constructor
    cout<<"\n\nParamerterised constructor start";
    Hero b(80,'A');
    b.print();


    //copy constructor
    cout<<"\n\nCopy constructor start"<<endl;
    Hero c(70,'c');
    c.print();

    Hero d(c);
    d.print();


    //output:
    //
    //    Default constructor called
    //
    //
    //    Paramerterised constructor start
    //
    //    health: 80
    //    level: A
    //
    //
    //
    //    Copy constructor start
    //
    //
    //    health: 70
    //    level: c
    //
    //
    //
    //    health: 70
    //    level: c
}
