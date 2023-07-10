#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/cpp-pointers/#:~:text=Pointers%20are%20symbolic%20representations%20of,the%20main%20use%20of%20pointers.
                  https://www.guru99.com/cpp-pointers.html
                  https://www.simplilearn.com/tutorials/cpp-tutorial/pointers-in-cpp
                  https://www.scaler.com/topics/cpp/pointers-in-cpp/
                  https://www.softwaretestinghelp.com/pointers-in-cpp/
                  https://www.javatpoint.com/cpp-pointers
                  https://cplusplus.com/doc/tutorial/pointers/
                  https://www.programiz.com/cpp-programming/pointers
                  https://www.tutorialspoint.com/cplusplus/cpp_pointers.htm
*/
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
