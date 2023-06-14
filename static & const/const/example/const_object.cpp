#include<iostream>
using namespace std;
class ABC
{
public:
    // define data member
    int A;

    // create constructor of the class ABC
    ABC ()
    {
        A = 10; // define a value to A
    }
};

int main ()
{
// declare a constant object
    const ABC obj;
    cout<<"The value of A: "<<obj.A<<endl;
    // obj.A = 20; // It returns a compile time error


    //output:
    //   The value of A: 10
}
