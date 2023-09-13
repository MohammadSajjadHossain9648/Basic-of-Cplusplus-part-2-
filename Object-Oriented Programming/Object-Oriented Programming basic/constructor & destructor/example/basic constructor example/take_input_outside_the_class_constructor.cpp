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
    int rno;
    char name[50];
    char grade;

public:
    Student();
    void display();
};

Student::Student()
{
    cout<<"\nEnter the RollNo: ";
    cin>>rno;

    cout<<"\nEnter the Name: ";
    cin>>name;

    cout<<"\nEnter the Grade: ";
    cin>>grade;
}

void Student::display()
{
    cout<<"\nroll no: "<<rno<<"\nname: "<<name<<"\ngrade: "<<grade;
}

int main()
{
    Student s;
    s.display();


    //output:
    //
    //    Enter the RollNo: 151
    //
    //    Enter the Name: tamim
    //
    //    Enter the Grade: A
    //
    //    roll no: 151
    //    name: tamim
    //    grade: A
}
