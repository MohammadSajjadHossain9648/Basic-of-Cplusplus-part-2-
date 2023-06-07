#include<iostream>
using namespace std;
/*
    Just like static member variables of class, we can declare class objects as static. Static class objects are
    also initialized only once and remain active throughout the program. As the object is a user-defined type, a
    static class object is initialized similarly to the ordinary objects using a constructor.
*/
class xyz
{
    int i;
public:
    xyz()
    {
        i = 0;
        cout<<"\nConstructor::xyz";
    }
    ~xyz()
    {
        cout<<"\nDestructor::xyz";
    }
};

void f()
{
    static xyz obj;   //declare Static Class Object
}

int main()
{
    f();
    cout<<"\nEnd Main";


    //output:
    //
    //    Constructor::xyz
    //    End Main
    //    Destructor::xyz
}

