#include<iostream>
using namespace std;
/*
    References and Pointers
    There are 3 ways to pass C++ arguments to a function:

    Call-By-Value
    Call-By-Reference with a Pointer Argument
    Call-By-Reference with a Reference Argument
*/

// Pass-by-Value
int square1(int n)
{
    // Address of n in square1() is not the same as num1 in main()
    cout<<"address of num1 in square1(): "<<&n<<"\n";

    // clone modified inside the function
    return n*n;
}

// Pass-by-Reference with Pointer Arguments
void square2(int* n)
{
    // Address of n in square2() is the same as num2 in main()
    cout<<"address of num2 in square2(): "<<n<<"\n";

    // Explicit de-referencing to get the value pointed-to
    *n *= *n;
}

// Pass-by-Reference with Reference Arguments
void square3(int& n)
{
    // Address of n in square3() is the same as num3 in main()
    cout<<"address of num3 in square3(): "<<&n<<"\n";

    // Implicit de-referencing (without '*')
    n *= n;
}
int main()
{
    // Call-by-Value
    int num1 = 8;
    cout<<"address of num1 in main(): "<<&num1<<"\n";
    cout<<"Square of num1: "<<square1(num1)<<"\n";
    cout<<"No change in num1: "<<num1<<"\n";

    // Call-by-Reference with Pointer Arguments
    int num2 = 8;
    cout<<"\n\naddress of num2 in main(): "<<&num2<<"\n";
    square2(&num2);
    cout<<"Square of num2: "<<num2<<"\n";
    cout<<"Change reflected in num2: "<<num2<<"\n";

    // Call-by-Reference with Reference Arguments
    int num3 = 8;
    cout<<"\n\naddress of num3 in main(): "<<&num3<<"\n";
    square3(num3);
    cout<<"Square of num3: "<<num3<<"\n";
    cout<<"Change reflected in num3: "<<num3<<"\n";


    //output:
    //    address of num1 in main(): 0x23635ffbbc
    //    Square of num1: address of num1 in square1(): 0x23635ffb90
    //    64
    //    No change in num1: 8
    //
    //
    //    address of num2 in main(): 0x23635ffbb8
    //    address of num2 in square2(): 0x23635ffbb8
    //    Square of num2: 64
    //    Change reflected in num2: 64
    //
    //
    //    address of num3 in main(): 0x23635ffbb4
    //    address of num3 in square3(): 0x23635ffbb4
    //    Square of num3: 64
    //    Change reflected in num3: 64
}
