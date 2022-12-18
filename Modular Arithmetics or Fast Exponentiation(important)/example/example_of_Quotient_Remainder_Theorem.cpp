#include<iostream>
#include<cmath>
using namespace std;
/*
    to know more: https://codeforces.com/blog/entry/72527?f0a28=1
                  https://www.geeksforgeeks.org/modular-arithmetic/?ref=rp
                  https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
                  https://www.codespeedy.com/modular-exponentiation-in-cpp-power-in-modular/
                  https://www.sanfoundry.com/cpp-program-implement-modular-exponentiation-algorithm/

                  https://www.javatpoint.com/write-a-program-to-find-the-quotient-and-remainder
                  https://www.tutorialspoint.com/cplusplus-program-to-find-quotient-and-remainder
                  https://www.geeksforgeeks.org/cpp-program-to-find-quotient-and-remainder/
                  https://www.geeksforgeeks.org/quotient-remainder-theorem/
                  https://www.programiz.com/cpp-programming/examples/quotient-remainder
                  https://www.programiz.com/cpp-programming/library-function/cmath/remainder
*/
/*
    1.Quotient Remainder Theorem:
    Quotient and Remainder are parts of division along with dividend and divisor.

    The number which we divide is known as the dividend. The number which divides the dividend is known as the divisor.
    The result obtained after the division is known as the quotient and the number left over is the remainder.

             Divisor) Dividend (  Quotient

                    ------------
                      remainder

    formula: Dividend = Divisor * Quotient + Remainder
             1. Quotient = Dividend/Divisor
             2. Dividend = Divisor x Quotient + Remainder
             => Remainder = Dividend - (Divisor x Quotient)

    Use of Quotient Remainder Theorem:
    Quotient remainder theorem is the fundamental theorem in modular arithmetic. It is used to prove Modular Addition,
    Modular Multiplication and many more principles in modular arithmetic.
*/
int main()
{
    int divisor, dividend, quotient, rem;
    cout<<"Enter divisor: ";
    cin>>divisor;
    cout<<"Enter dividend: ";
    cin>>dividend;

    quotient = dividend / divisor;
    rem = dividend % divisor;

    cout<<"\n\nQuotient of "<<dividend<<" / "<<divisor<<" = "<<quotient;
    cout<<"\nRemainder of "<<dividend<<" % "<<divisor<<" = "<<rem;



    //using remainder math function with header #include<cmath>
    cout<<"\n\nRemainder of "<<dividend<<" % "<<divisor<<" = "<<remainder(dividend, divisor);



    //output:
    //    Enter divisor: 15
    //    Enter dividend: 33
    //
    //
    //    Quotient of 33 / 15 = 2
    //    Remainder of 33 % 15 = 3
    //
    //    Remainder of 33 % 15 = 3

    /*
    Time Complexity: O(1)
    Auxiliary Space: O(1)
    */
}
