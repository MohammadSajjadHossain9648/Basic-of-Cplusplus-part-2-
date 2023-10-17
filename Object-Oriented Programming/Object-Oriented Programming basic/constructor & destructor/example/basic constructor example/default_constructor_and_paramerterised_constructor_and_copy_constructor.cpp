#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/constructors-c/
                  https://www.studytonight.com/cpp/constructors-and-destructors-in-cpp.php
                  https://www.naukri.com/learning/articles/constructors-in-c-plus-plus/
                  https://www.programiz.com/cpp-programming/constructors
                  https://www.javatpoint.com/cpp-constructor
                  http://www.trytoprogram.com/cplusplus-programming/constructors/
                  https://cplusplus.com/doc/tutorial/classes/
                  https://www.codementor.io/@supernerdd7/constructor-and-destructor-in-c-1r8kkogm6j
                  https://levelup.gitconnected.com/learning-c-class-constructors-2aacfd6b7ff7
*/
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
