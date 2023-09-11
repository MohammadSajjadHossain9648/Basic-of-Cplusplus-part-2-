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
