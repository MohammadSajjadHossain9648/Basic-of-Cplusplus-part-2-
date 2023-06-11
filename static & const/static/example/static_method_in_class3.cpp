#include<iostream>
using namespace std;

class Sample
{
    static int A;
    static int B;
public:
    static void printValues()
    {
        A++;
        ++B;
        cout<<"\nValue of A: "<<A;
        cout<<"\nValue of B: "<<B;
    }
};

int Sample :: A =10;
int Sample :: B =20;

int main()
{
    Sample::printValues();

    //output:
    //    Value of A: 11
    //    Value of B: 21
}
