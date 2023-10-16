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
