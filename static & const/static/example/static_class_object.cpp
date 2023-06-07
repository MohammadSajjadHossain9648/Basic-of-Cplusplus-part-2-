#include<iostream>
using namespace std;
/*
    Just like static member variables of class, we can declare class objects as static. Static class objects are
    also initialized only once and remain active throughout the program. As the object is a user-defined type, a
    static class object is initialized similarly to the ordinary objects using a constructor.
*/
/*
    Static Class Objects:

    Static keyword works in the same way for class objects too. Objects declared static are allocated storage in
    static storage area, and have scope till the end of program.
    Static objects are also initialized using constructors like other normal objects. Assignment to zero, on using
    static keyword is only for primitive datatypes, not for user defined datatypes.
    You must be thinking, why was the destructor not called upon the end of the scope of if condition, where the
    reference of object obj should get destroyed. This is because object was static, which has scope till the program's
    lifetime, hence destructor for this object was called when main() function exits.
*/
class xyz
{
public:
    xyz()
    {
        cout<<"\nConstructor::xyz";
    }
    ~xyz()
    {
        cout<<"\nDestructor::xyz";
    }
};

int main()
{
//without using static class objects
    xyz obj2;
    cout<<"\nEnd Main";

    //output:
    //
    //    Constructor::xyz
    //    Destructor::xyz
    //    End Main




//with using static class objects
    static xyz obj;  //declare Static Class Object
    cout<<"\nEnd Main";


    //output:
    //
    //    Constructor::xyz
    //    End Main
    //    Destructor::xyz
}
