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
/*
    Naive Approach:  To solve the problem follow the below idea:
    A naive method is to try all numbers from 1 to m. For every number x, check if (A * X) % M is 1
    find the x value

    Input: A = 3, M = 11
    Output: 4
    Explanation: Since (4*3) mod 11 = 1, 4 is modulo inverse of 3(under 11).
    One might think, 15 also as a valid output as “(15*3) mod 11”
    is also 1, but 15 is not in range {1, 2, … 10}, so not valid.

    Input:  A = 10, M = 17
    Output: 12
    Explamation: Since (10*12) mod 17 = 1, 12 is modulo inverse of 10(under 17).
*/
/*
    the modular inverse must satisfy the below equation.
    => (a * x) mod(m) = 1  //Let the modular inverse of ‘a mod(m)’ be x.
*/

int modInverse(int base, int mod)
{
    for(int x=1; x<mod; x++)
    {
        if( (base * x) % mod == 1) // can write -> if( ( (base%mod) * (x%mod) ) % mod == 1)
        {
            return i;
        }
    }
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
    Time Complexity: O(mod)
    In the naive approach, we check for every number from 1 to mod, so, the time complexity is O(mod).

    Auxiliary Space: O(1)
    */
}
