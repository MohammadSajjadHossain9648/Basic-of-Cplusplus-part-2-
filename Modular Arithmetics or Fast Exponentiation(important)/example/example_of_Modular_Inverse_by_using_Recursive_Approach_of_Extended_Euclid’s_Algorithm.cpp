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
    2.Recursive Approach using Extended Euclid’s Algorithm
    he idea is to use Extended Euclidean algorithms that take two integers ‘a’ and ‘b’, then find their gcd, and also
    find ‘x’ and ‘y’ such that
    ax + by = gcd(a, b)

    To find the multiplicative inverse of ‘A’ under ‘M’, we put b = M in the above formula. Since we know that
    A and M are relatively prime, we can put the value of gcd as 1.
    Ax + My = 1

    If we take modulo M on both sides, we get
    Ax + My ≅ 1 (mod M)

    We can remove the second term on left side as ‘My (mod M)’ would always be 0 for an integer y.
    Ax  ≅ 1 (mod M)

    So the ‘x’ that we can find using Extended Euclid Algorithm is the multiplicative inverse of ‘A’
*/

// C function for extended Euclidean Algorithm (used to find modular inverse.)
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b%a, a, &x1, &y1);

    // Update x and y using results of recursive call
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

// Function to find modulo inverse of b. It returns -1 when inverse doesn't
int modInverse(int base, int mod)
{
    int x, y; // used in extended GCD algorithm
    int g = gcdExtended(base, mod, &x, &y);

    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;

    // m is added to handle negative x
    return (x%mod + mod) % mod;
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

    Space complexity: O(log mod), because of the internal recursion stack.
    */
}
