#include<iostream>
using namespace std;

class Data
{
public:
    int a, b;

    // Default Constructor
    Data()
    {
        a = 100;
        b = 200;
    }
};

int main()
{
    Data dt;  //Object created
    cout<<"Value of a: "<<dt.a;
    cout<<"\nValue of b: "<<dt.b;


    //output:
    //    Value of a: 100
    //    Value of b: 200
}
