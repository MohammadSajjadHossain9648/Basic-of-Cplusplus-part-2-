#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

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
