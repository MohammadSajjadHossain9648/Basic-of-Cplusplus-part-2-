#include<iostream>
using namespace std;
/*
    to know more: https://codeforces.com/blog/entry/72527?f0a28=1
                  https://www.geeksforgeeks.org/modular-arithmetic/?ref=rp
                  https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
                  https://www.codespeedy.com/modular-exponentiation-in-cpp-power-in-modular/
                  https://www.sanfoundry.com/cpp-program-implement-modular-exponentiation-algorithm/
                  https://www.codingninjas.com/codestudio/library/modular-arithmetic
                  https://www.geeksforgeeks.org/modular-addition/
*/
/*
    2.Modular Addition
    Rule for modular addition is:
    (a + b) mod m = ((a mod m) + (b mod m)) mod m ->can write -> ((((a mod m)mod m)mod m) + (b mod m)) mod m
    (a + b + c) mod m = ((a mod m) + (b mod m) + (c mod m)) mod m

    Example 1:
    Find the remainder of 22 + 26 + 29 when divided by 5.
    Solution:
    On dividing 22 by 5 we get 2 as remainder.
    On dividing 26 by 5 we get 1 as remainder.
    On dividing 29 by 5 we get 4 as remainder.
    Remainder of the expression (22 + 26 + 29)/5 will be equal to (2 + 1 + 4)/5.
    Combined remainder will be equal to remainder of 7/5 i.e. 2.

    How is it useful?
    If we need to find remainder of addition of two large numbers, we can avoid doing the addition of large numbers,
    especially helpful in programming where addition of large numbers can cause overflow. Like in C, C++ programming
    languages if addition of two large numbers exceed 10^18 then overflow happens and we start getting unexpected
    results.
*/
/*
    3. Modular Subtraction
    Modular Subtraction is subtracting two numbers and taking the combined result’s modulus.

    (a - b + m) mod m = ((a mod m) - (b mod m) + m) mod m = ((((a mod m)mod m)mod m) - (b mod m) + m) mod m

    It's essential to add “m” at the end. Otherwise, the result can be negative (less than 0) in languages like C/C++
    that don't have a well-defined modulus definition for negative numbers that occur when a % m < b % m. Adding them
    will ensure that the net is always positive. Also, adding m to the total doesn't affect the modulus operation's
    final result, i.e.,
    (a + m) % m = a % m as m%m is 0.

    Example 1:
    Find the remainder of 22 - 26 when divided by 5.
    Solution:
    On dividing 22 by 5 we get 2 as remainder.
    On dividing 26 by 5 we get 1 as remainder.
    Remainder of the expression (22 - 26 + 5)/5 will be equal to (2 - 1 + 5)/5.
    Combined remainder will be equal to remainder of 6/5 i.e. 1.

*/

int main()
{
    int base1, base2, base3, mod;
    cout<<"Enter base1: ";
    cin>>base1;
    cout<<"Enter base2: ";
    cin>>base2;
    cout<<"Enter base3: ";
    cin>>base3;
    cout<<"Enter mod: ";
    cin>>mod;

    cout<<"\nModular Addition: "<<(base1+base2+base3)%mod;
    cout<<"\nModular Addition: "<<( (base1%mod)+(base2%mod)+(base3%mod) )%mod;

    cout<<"\nModular Subtraction: "<<(base1-base2 + mod)%mod;
    cout<<"\nModular Subtraction: "<<( (base1%mod)-(base2%mod) + mod )%mod;

    //output:
    //    Enter base1: 22
    //    Enter base2: 26
    //    Enter base3: 29
    //    Enter mod: 5
    //
    //    Modular Addition: 2
    //    Modular Addition: 2
    //    Modular Subtraction: 1
    //    Modular Subtraction: 1

}
