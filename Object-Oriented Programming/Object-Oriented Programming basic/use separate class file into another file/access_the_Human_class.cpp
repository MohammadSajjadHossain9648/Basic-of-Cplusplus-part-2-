#include<iostream>
#include "class_Human.cpp"
using namespace std;

int main()
{
    //create object h1 of Human class
    Human h1;

    h1.gender = "male";
    h1.name = "rafi";
    h1.age = 25;
    h1.height = 5.5;

    h1.walk();
    h1.run();
    h1.eat();


    //output:
    //
    //    rafi can walk.
    //    rafi can run.
    //    rafi can eat.
}
