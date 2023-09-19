#include<iostream>
using namespace std;

class Demo
{
    int a, b;
public:
    Demo()   // default constructor
    {
        cout<<"Default Constructor"<<endl;
    }
    Demo(int a, int b):a(a),b(b)  //parameterised constructor
    {
        cout<<"parameterized constructor -> values are "<<a <<" and "<< b<<endl;
    }

} instance(100,250);  //instance is a Demo class object


int main()
{
    //output:
    //   parameterized constructor -> values are 100 and 250
}
