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
class Person
{
private:
    int* age;

public:
    Person(int* person_age)
    {
        cout<<"Constructor for age is called"<<endl;

        // allocating memory
        age = new int;
        age = person_age;
    }

    // display function to print the class data members value
    void display()
    {
        cout<<"Age of current object: "<<*age<<endl;
        cout<<endl;
    }

};
int main()
{
    // creating objects of class using parameterized constructor
    int age = 25;
    Person obj1(&age);

    // printing class data members for first object
    obj1.display();


    //output:
    //    Constructor for age is called
    //    Age of current object: 25
}
