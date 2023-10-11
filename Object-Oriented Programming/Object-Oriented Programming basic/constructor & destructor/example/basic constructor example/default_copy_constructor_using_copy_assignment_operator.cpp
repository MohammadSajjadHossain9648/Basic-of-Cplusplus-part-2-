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
