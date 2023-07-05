#include <iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/cpp-pointers/#:~:text=Pointers%20are%20symbolic%20representations%20of,the%20main%20use%20of%20pointers.
                  https://www.guru99.com/cpp-pointers.html
                  https://www.simplilearn.com/tutorials/cpp-tutorial/pointers-in-cpp
                  https://www.scaler.com/topics/cpp/pointers-in-cpp/
                  https://www.softwaretestinghelp.com/pointers-in-cpp/
                  https://www.javatpoint.com/cpp-pointers
                  https://cplusplus.com/doc/tutorial/pointers/
                  https://www.programiz.com/cpp-programming/pointers
                  https://www.tutorialspoint.com/cplusplus/cpp_pointers.htm
*/
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
