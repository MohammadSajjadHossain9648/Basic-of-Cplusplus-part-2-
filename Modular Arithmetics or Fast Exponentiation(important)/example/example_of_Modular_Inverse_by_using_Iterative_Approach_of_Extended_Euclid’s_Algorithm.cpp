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

                  https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/
                  https://www.codingninjas.com/codestudio/library/multiplicative-inverse
                  https://rosettacode.org/wiki/Modular_inverse
                  https://www.boost.org/doc/libs/master/libs/integer/doc/html/boost_integer/mod_inverse.html
                  https://codeforces.com/blog/entry/23365
                  https://cp-algorithms.com/algebra/module-inverse.html
                  https://tutorialspoint.dev/algorithm/mathematical-algorithms/multiplicative-inverse-under-modulo-m

*/
/*
    6.Modular Inverse
    Let the modular inverse of ‘a mod(m)’ be x.
    Then, the modular inverse must satisfy the below equation.
    => (a * x) mod(m) = 1  //Let the modular inverse of ‘a mod(m)’ be x.

    The modular inverse, i.e., x here, must also lie in the set {1, 2, 3 …. m-1}.
    The modular inverse of ‘a mod(m)’ exists if a and m are co-prime.
    Two numbers, a and b, are co-prime if gcd(a, b) = 1. gcd refers to the greatest common divisor of both the
    numbers.

    We’ll show the above using an example to illustrate the process.
    Let m = 499, a = 10
    => (50 * 10) % 499
    => 500 % 499
    => 1
    Hence 50 is the modular inverse of 10 (under 499) or 10 mod(499). The algorithm generally used to calculate
    the modular inverse is the extended-euclidean algorithm.


    there are three step to do Modular Inverse:
    1.brute force approach / Naive Approach
    2.Recursive Approach using Extended Euclid’s Algorithm & Iterative Approach using Extended Euclid’s Algorithm
    3.Fermat’s little theorem approach
*/
int modInverse(int base, int mod)
{
    int m0 = mod;
    int y = 0, x = 1;

    if (mod == 1)
        return 0;

    while (base > 1)
    {
        // q is quotient
        int q = base / mod;
        int t = mod;

        // mod is remainder now, process same as Euclid's algo
        mod = base % mod;
        base = t;
        t = y;

        // Update y and x
        y = x - q * y;
        x = t;
    }

    // Make x positive
    if (x < 0)
        x += m0;

    return x;
}

int main()
{
    int base, mod;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter mod: ";
    cin>>mod;

    cout<<"\nthe value of x is "<<modInverse(base, mod);

    //output:
    //    Enter base: 10
    //    Enter mod: 17
    //
    //    the value of x is 12

    /*
    Time Complexity: O(log mod)
    The time complexity of this approach is O(log mod) as for every recursive call we are reducing ‘a’ by continuously
    doing mod with b.

    Space Complexity: O(1)
    */
}
