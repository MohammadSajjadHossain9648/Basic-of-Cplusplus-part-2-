#include<iostream>
using namespace std;

class Employee
{
public:
    int age;
    // Default constructor not defined.
    // but Compiler calls default constructor.
};

int main()
{
    // Object e1 declared.
    Employee e1;
    cout<<"\nage of Employee e1: "<<e1.age;


    //output:
    //   age of Employee e1: 0
}

