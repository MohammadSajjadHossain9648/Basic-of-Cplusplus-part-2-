#include<iostream>
using namespace std;

class Employee
{
public:
    int age;
    // Parameterized constructor
    Employee(int x)
    {
        //Age assigned to value passed as an argument while object declaration.
        age = x;
    }
};

int main()
{
    // Object c1 declared with argument 40, which gets assigned to age.
    Employee e1(40);
    Employee e2(30);
    Employee e3(50);

    cout<<"\nage of Employee e1: "<<e1.age;
    cout<<"\nage of Employee e2: "<<e2.age;
    cout<<"\nage of Employee e3: "<<e3.age;


    //output:
    //
    //    age of Employee e1: 40
    //    age of Employee e2: 30
    //    age of Employee e3: 50
}
