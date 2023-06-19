#include<iostream>
using namespace std;
class Test
{
    const int i;
    public:
    Test(int x):i(x)
    {
        cout<<"\ni value set: "<<i;
    }
};

int main()
{
    Test t(10);
    Test s(20);

    //output:
    //
    //    i value set: 10
    //    i value set: 20

    /*
    In this program, i is a constant data member, in every object its independent copy will be present, hence it
    is initialized with each object using the constructor. And once initialized, its value cannot be changed. The
    above way of initializing a class member is known as Initializer List in C++.
    */
}
