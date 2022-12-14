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
                  https://www.geeksforgeeks.org/modular-exponentiation-recursive/
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
    // Initialize answer
    int res = 1;

    // Check till the number becomes zero
    while (exp > 0)
    {
        // If exp is odd, multiply base with result
        if (exp % 2 == 1)
            res = (res * base);

        // exp = exp/2
        exp = exp >> 1;

        // Change base to base^2
        base = (base * base);
    }
    return res % mod;
}

int power2(long long base, unsigned int exp, int mod)
{
    // Initialize answer
    int res = 1;

    base = base % mod; // Update base if it is more than or equal to mod

    if (base == 0) return 0; // In case base is divisible by mod;

    while (exp > 0)
    {
        // If exp is odd, multiply base with result
        if (exp & 1)
            res = (res*base) % mod;

        // exp must be even now
        exp = exp>>1; // exp = exp/2
        base = (base*base) % mod;
    }
    return res;
}

//only use this
long long power3(long long base, long long exp, int mod)
{
    // Initialize answer
    int res = 1;

    // Check till the number becomes zero
    while (exp > 0)
    {
        // If exp is odd, multiply base with result
        if (exp % 2 == 1)
            res = (res * base) % mod;

        // exp = exp/2
        exp = exp >> 1;
        // Change base to base^2
        base = (base * base) % mod;
    }
    return res % mod;
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

    /*
    Time Complexity: O(log2 exp), where exp represents the value of the given input.
    Auxiliary Space: O(1), no extra space is required, so it is a constant.
    */

    /* problem with above approach
    Efficient Approach:
    The problem with the above solutions is, overflow may occur for large values of n or x. Therefore, power
    is generally evaluated under the modulo of a large number.

    Below is the fundamental modular property that is used for efficiently computing power under modular arithmetic.
    (ab) mod p = ( (a mod p) (b mod p) ) mod p

    For example a = 50,  b = 100, p = 13
    50  mod 13  = 11
    100 mod 13  = 9

    (50 * 100) mod 13 = ( (50 mod 13) * (100 mod 13) ) mod 13
    or (5000) mod 13 = ( 11 * 9 ) mod 13
    or 8 = 8
    */

    cout<<"\n\npower is "<<power2(base, exp, mod);

    /*
    Time Complexity: O(log exp), where exp represents the value of the given input.
    Auxiliary Space: O(1), no extra space is required, so it is a constant.
    */

    //output:
    //    Enter base: 2
    //    Enter exp: 5
    //    Enter mod: 13
    //
    //    power is 6
    //
    //    power is 6



    //only use this
    int base2, exp2, mod2;
    cout<<"\n\nEnter base2: ";
    cin>>base2;
    cout<<"Enter exp2: ";
    cin>>exp2;
    cout<<"Enter mod2: ";
    cin>>mod2;
    cout<<"\npower is "<<power3(base2, exp2, mod2);

    //output:
    //    Enter base2: 7
    //    Enter exp2: 6
    //    Enter mod2: 26
    //
    //    power is 25
}
