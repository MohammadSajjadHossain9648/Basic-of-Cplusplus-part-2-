#include<iostream>
using namespace std;
/*
    same as -> example_of_copy_constructor(pass by value).cpp
*/
class Student
{
    int id;
    char grade;

public:
    Student(int i, char g)
    {
        id = i;
        grade = g;
    }

    /* same as above using this keyword
    Student(int id, char grade)
    {
        this -> id = id;
        this -> grade = grade;
    }
    */

    void print()
    {
        cout<<"\nId: "<<id<<"\nGrade: "<<grade<<endl;
    }
};
int main()
{
    Student s1(10,'B');
    s1.print();

    Student s2(35, 'D');
    s2.print();


    //using copy assignment operator( = ) -> s2 = s1;
    cout<<"\n\nafter using copy assignment operator( = )";
    s2 = s1;

    s1.print();
    s2.print();

    //output:
    //
    //    Id: 10
    //    Grade: B
    //
    //    Id: 35
    //    Grade: D
    //
    //
    //    after using copy assignment operator( = )
    //    Id: 10
    //    Grade: B
    //
    //    Id: 10
    //    Grade: B
}
