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
/*
    declare variable globally what value want to change, otherwise return references didnot work
*/

//example 1: change int value
int num = 123; //declare globally

int &swap(int i)
{
    num = i;
    return num;
}


//example 2: change array value
int arr[] = {1,0,3,0,5}; //declare globally

int &swap2(int i)
{
    return arr[i];
}

int main()
{
//example 1: change int value
    cout<<"\n\nBefore change : num = "<<num;
    swap(100);
    cout<<"\nAfter change : num = "<<num;


//example 2: change array value
    cout<<"\n\nBefore change : arr[] = ";
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
    swap2(1) = 2;
    swap2(3) = 4;

    cout<<"\nAfter change : arr[] = ";
    for(auto i: arr)
    {
        cout<<i<<" ";
    }

    //output:
    //
    //    Before change : num = 123
    //    After change : num = 100
    //
    //    Before change : arr[] = 1 0 3 0 5
    //    After change : arr[] = 1 2 3 4 5
}

