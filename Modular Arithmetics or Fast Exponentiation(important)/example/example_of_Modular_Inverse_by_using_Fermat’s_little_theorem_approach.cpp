#include<iostream>
#include<numeric>
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
    Modular multiplicative inverse when M is prime:
    If we know M is prime, then we can also use Fermat’s little theorem to find the inverse.
    aM-1 ≅ 1 (mod M)

    If we multiply both sides with a-1, we get
    a-1 ≅ a M-2 (mod M)
*/
// To compute x^y under modulo m
int power(int x, unsigned int y, unsigned int M)
{
    if (y == 0)
        return 1;

    int p = power(x, y / 2, M) % M;
    p = (p * p) % M;

    return (y % 2 == 0) ? p : (x * p) % M;
}

// Function to find modulo inverse of b. It returns -1 when inverse doesn't
int modInverse(int base, int mod)
{
    int x, y; // used in extended GCD algorithm
    int g = gcd(base, mod);

    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;

    // m is added to handle negative x
    return power(base, mod-2, mod);
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
