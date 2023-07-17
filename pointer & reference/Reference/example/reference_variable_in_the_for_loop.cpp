#include<iostream>
#include<vector>
#include<iomanip>
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
// In For Each Loop to modify all objects: We can use references in for each loop to modify all elements.
    vector<int> vec = {1,2,3,4,5};

    // We can modify elements if we use reference
    // by adding all elements with 5
    for(int &i: vec) //never write -> for(int i: vec) , cause vec array never update
    {
        i += 5;
    }

    cout<<"\nvector<int> vec = ";
    for(auto i: vec)
    {
        cout<<i<<setw(3);
    }




// For Each Loop to avoid the copy of objects: We can use references in each loop to avoid a copy of individual
// objects when objects are large.
    vector<string> str = { "geeksforgeeks practice",
                         "geeksforgeeks write",
                         "geeksforgeeks ide" };

    // We avoid copy of the whole string object by using reference.
    cout<<"\n\nvector<string> str: \n";
    for(const auto &i: str)
    {
        cout<<i<<"\n";
    }



    //output:
    //
    //    vector<int> vec = 6  7  8  9 10
    //
    //    vector<string> str:
    //    geeksforgeeks practice
    //    geeksforgeeks write
    //    geeksforgeeks ide
}
