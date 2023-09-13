#include<iostream>
using namespace std;

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
