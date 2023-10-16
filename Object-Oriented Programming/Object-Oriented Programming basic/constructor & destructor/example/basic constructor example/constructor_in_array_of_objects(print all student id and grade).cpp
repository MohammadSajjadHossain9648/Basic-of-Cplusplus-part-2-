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

    void print()
    {
        cout<<"\n\nId: "<<id<<"\ngrade: "<<grade;
    }
};
int main()
{
    Student *s = new Student[5]{{10,'A'},{11,'B'},{12,'C'},{13,'D'},{14,'E'}};

    for(int i=0; i<5; i++)
    {
        s[i].print();
    }


    //output:
    //
    //    Id: 10
    //    grade: A
    //
    //    Id: 11
    //    grade: B
    //
    //    Id: 12
    //    grade: C
    //
    //    Id: 13
    //    grade: D
    //
    //    Id: 14
    //    grade: E
}
