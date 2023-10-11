#include<iostream>
using namespace std;

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

    //default copy constructor
    Student s2(s1); //using copy assignment operator( = ) -> Student s2 = s1;
    s2.print();


    //output:
    //
    //    Id: 10
    //    Grade: B
    //
    //    Id: 10
    //    Grade: B
}
