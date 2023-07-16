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
int main()
{
    int num = 5;
    int &ptr = num; //ptr is a reference to num

    cout<<"\n\nbefore changing value of num:\nvalue of ptr/num: "<<ptr;
    ptr += 5; //&ptr += 5; cause arithmetic operation is not possible with reference variable, it throws an error.
    cout<<"\n\nafter changing value of num:\nvalue of ptr/num: "<<ptr;

    num -= 5; //&ptr -= 5; cause arithmetic operation is not possible with reference variable, it throws an error.
    cout<<"\n\nafter changing value of num:\nvalue of ptr/num: "<<ptr;


    //output:
    //    before changing value of num:
    //    value of ptr/num: 5
    //
    //    after changing value of num:
    //    value of ptr/num: 10
    //
    //    after changing value of num:
    //    value of ptr/num: 5
}
