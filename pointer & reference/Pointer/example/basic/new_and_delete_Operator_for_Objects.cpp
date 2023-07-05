#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    // constructor initializes age to 12
    Student() : age(12) {}

    void getAge()
    {
        cout<<"Age = "<<age<<endl;
    }
};

int main()
{
    // dynamically declare Student object
    Student* ptr = new Student();

    // call getAge() function
    ptr->getAge();

    // ptr memory is released
    delete ptr;

    //output:
    //  Age = 12

    /* what happen in code?
    In this program, we have created a Student class that has a private variable age.
    We have initialized age to 12 in the default constructor Student() and print its value with the function getAge().
    In main(), we have created a Student object using the new operator and use the pointer ptr to point to its address.
    The moment the object is created, the Student() constructor initializes age to 12.

    We then call the getAge() function using the code:
        ptr->getAge();

    Notice the arrow operator ->. This operator is used to access class members using pointers.
    */
}
