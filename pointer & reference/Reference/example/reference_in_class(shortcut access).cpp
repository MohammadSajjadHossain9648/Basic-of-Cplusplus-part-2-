#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/references-in-c/
                  https://www.javatpoint.com/cpp-references
                  https://www.softwaretestinghelp.com/references-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-reference
                  https://www.educative.io/answers/reference-variables-and-memory-address-of-variables-in-cpp
                  https://www.tutorialspoint.com/what-is-a-reference-variable-in-cplusplus#:~:text=Reference%20variable%20is%20an%20alternate,used%20to%20declare%20reference%20variable.
                  https://www.cs.fsu.edu/~myers/c++/notes/references.html
*/
struct profile
{
    int id;
};
struct employee
{
    profile p;
};
int main()
{
    employee e;
    int &ref=e.p.id;
    ref=34;
    cout<<"employee id: "<<e.p.id<<endl;


    //output:
    //    employee id: 34

    /*
    With the help of references, we can easily access the nested data.

    In the above code, we are trying to access the 'id' of the profile struct of the employee. We generally access
    this member by using the statement e.p.id, but this would be a tedious task if we have multiple access to this
    member. To avoid this situation, we create a reference variable, i.e., ref, which is another name of 'e.p.id'.
    */
}
