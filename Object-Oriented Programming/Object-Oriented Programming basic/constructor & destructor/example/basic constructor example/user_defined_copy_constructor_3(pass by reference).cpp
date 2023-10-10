#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/constructors-c/
                  https://www.studytonight.com/cpp/constructors-and-destructors-in-cpp.php
                  https://www.naukri.com/learning/articles/constructors-in-c-plus-plus/
                  https://www.programiz.com/cpp-programming/constructors
                  https://www.scaler.com/topics/cpp/constructor-and-destructor-in-cpp/
                  https://www.javatpoint.com/cpp-constructor
                  http://www.trytoprogram.com/cplusplus-programming/constructors/
                  https://cplusplus.com/doc/tutorial/classes/
                  https://www.codementor.io/@supernerdd7/constructor-and-destructor-in-c-1r8kkogm6j
                  https://levelup.gitconnected.com/learning-c-class-constructors-2aacfd6b7ff7
                  https://www.mygreatlearning.com/blog/constructor-in-cpp/
*/
class Employee
{
private:
    // Data members
    int salary, experience;

public:
    // Parameterized constructor
    Employee(int x1, int y1)
    {
        salary = x1;
        experience = y1;
    }

    // Copy constructor
    Employee(const Employee &new_employee)//write pass by reference and never write pass by value -> Employee(const Employee new_employee)
    {
        salary = new_employee.salary;
        experience = new_employee.experience;
    }

    void display()
    {
        cout<<"Salary: "<<salary<<endl;
        cout<<"Years of experience: "<<experience<<endl;
    }
};

// main function
int main()
{
    // Parameterized constructor
    Employee employee1(34000, 2);
    cout<<"Employee1 using parameterized constructor : \n";
    employee1.display();

    // Copy constructor
    Employee employee2 = employee1;
    cout<<"\n\nEmployee2 using copy constructor : \n";
    employee2.display();


    //output:
    //    Employee1 using parameterized constructor :
    //    Salary: 34000
    //    Years of experience: 2
    //
    //
    //    Employee2 using copy constructor :
    //    Salary: 34000
    //    Years of experience: 2
}
