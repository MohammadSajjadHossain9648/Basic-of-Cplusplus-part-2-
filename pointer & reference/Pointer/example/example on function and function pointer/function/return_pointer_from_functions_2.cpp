#include<iostream>
using namespace std;

int& func()
{
    int x = 5;
    // return x; -> This is not allowed because x is local to func()
    static int y = 10;
    cout<<"Value of x and y is "<<x<<" and "<<y<<endl;
    return y;   // This is allowed because y is static and is visible to main()
}

int main()
{
    func() = 200;    // Changing the value of y here
    func();

    //output:
    //    Value of x and y is 5 and 10
    //    Value of x and y is 5 and 200

    /*
    Explanation:
    The func() function shown in the code above returns a reference to a static variable y. The visibility scope
    of y extends to main() since y is static. When the first function call is made, i.e. func() = 200; the current
    values of x and y are printed and a reference to y is returned by the function. Then the value of y is updated
    to 200. In other words, this is the same as writing y = 200; When the second function call is made, the current
    values of x and y are printed again and we can see that the value of y has been modified to 200 and the value of
    x remains the same as before.
    */
}
