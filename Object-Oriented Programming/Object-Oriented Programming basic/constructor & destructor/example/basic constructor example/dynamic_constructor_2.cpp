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
    int* due_projects;

public:
    // Default constructor.
    Employee()
    {
        // Allocating memory at run time.
        due_projects = new int;
        *due_projects = 0;
    }

    // Parameterized constructor.
    Employee(int x)
    {
        due_projects = new int;
        *due_projects = x;
    }

    void display()
    {
        cout<<*due_projects<<endl;
    }
};

//main function
int main()
{
    // Default constructor would be called.
    Employee employee1 = Employee();
    cout<<"Due projects for employee1:\n";
    employee1.display();

    // Parameterized constructor would be called.
    Employee employee2 = Employee(10);
    cout<<"Due projects for employee2:\n";
    employee2.display();


    //output:
    //    Due projects for employee1:
    //    0
    //    Due projects for employee2:
    //    10
}
