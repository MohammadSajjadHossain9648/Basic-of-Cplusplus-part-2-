#include<iostream>
using namespace std;
/*
    to know more: https://codeforces.com/blog/entry/72527?f0a28=1
                  https://discuss.codechef.com/t/guide-to-modular-arithmetic-plus-tricks-codechef-edition-there-is-no-other-edition/67424
                  https://www.geeksforgeeks.org/modular-arithmetic/?ref=rp
                  https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
                  https://www.codespeedy.com/modular-exponentiation-in-cpp-power-in-modular/
                  https://www.sanfoundry.com/cpp-program-implement-modular-exponentiation-algorithm/
                  https://www.codingninjas.com/codestudio/library/modular-arithmetic

                  https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
                  https://www.sanfoundry.com/cpp-program-implement-modular-exponentiation-algorithm/
                  https://www.tutorialspoint.com/cplusplus-program-to-implement-modular-exponentiation-algorithm
                  https://www.codespeedy.com/modular-exponentiation-in-cpp-power-in-modular/
*/
/*
    7.Modular Exponentiation
    Finding a^b mod m is the modular exponentiation. There are two approaches for this – recursive and iterative.

    Example:
    a = 5, b = 2, m = 7
    (5 ^ 2) % 7 = 25 % 7 = 4
*/
int power(int base, int exp, int mod)
{
    // Base cases
    if (base == 0)
        return 0;
    if (exp == 0)
        return 1;

    // If exp is even
    long y;
    if (exp % 2 == 0) {
        y = power(base, exp / 2, mod);
        y = (y * y) % mod;
    }

    // If exp is odd
    else {
        y = base % mod;
        y = (y * power(base, exp - 1, mod) % mod) % mod;
    }

    return (int)((y + mod) % mod);
}

int main()
{
    int base, exp, mod;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter exp: ";
    cin>>exp;
    cout<<"Enter mod: ";
    cin>>mod;

    cout<<"\npower is "<<power(base, exp, mod);

    //output:
    //    Enter base: 2
    //    Enter exp: 5
    //    Enter mod: 13
    //
    //    power is 6

    /*
    Time Complexity : O(logn)
    Auxiliary Space: O(logn)
    */
}
