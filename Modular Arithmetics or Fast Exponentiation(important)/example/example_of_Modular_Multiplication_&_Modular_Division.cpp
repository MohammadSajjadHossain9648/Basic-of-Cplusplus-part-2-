#include<iostream>
using namespace std;
/*
    to know more: https://codeforces.com/blog/entry/72527?f0a28=1
                  https://www.geeksforgeeks.org/modular-arithmetic/?ref=rp
                  https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
                  https://www.codespeedy.com/modular-exponentiation-in-cpp-power-in-modular/
                  https://www.sanfoundry.com/cpp-program-implement-modular-exponentiation-algorithm/
                  https://www.codingninjas.com/codestudio/library/modular-arithmetic
                  https://www.geeksforgeeks.org/modular-multiplication/
                  https://www.geeksforgeeks.org/modular-division/
                  https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/
*/
/*
    4.Modular Multiplication
    Rule for modular multiplication is:
    (a * b) mod m = ((a mod m) * (b mod m)) mod m ->can write -> ((((a mod m)mod m)mod m) * (b mod m)) mod m
    (a * b * c) mod m = ((a mod m) * (b mod m) * (c mod m)) mod m

    Example 1:
    Find the remainder of 15 x 17 x 19 when divided by 7.
    Solution:
    On dividing 15 by 7 we get 1 as remainder.
    On dividing 17 by 7 we get 3 as remainder.
    On dividing 19 by 7 we get 5 as remainder.
    Remainder of the expression (15 x 17 x 19)/7 will be equal to (1 x 3 x 5)/7.
    Combined remainder will be equal to remainder of 15/7 i.e. 1.

    How is it useful?
    If we need to find remainder of multiplication of two large numbers, we can avoid doing the multiplication of
    large numbers, especially helpful in programming where multiplication of large numbers can cause overflow.
*/
/*
    5.Modular Division
    Unlike earlier, we can’t directly just do the below for dividing two numbers and taking the combined
    result’s modulus.
    (a / b) mod(m) ≠ (a mod(m) / b mod(m)) mod(m)
    We instead do the below-described operation if the modular inverse of b exists.
    (a / b) mod(m) = (a mod(m) * modular_inverse(b, m)) mod(m)
    Here, modular_inverse(b, m) refers to the modular inverse of b under m.


    Can we always do modular division?
    The answer is “NO”. First of all, like ordinary arithmetic, division by 0 is not defined. For example, 4/0 is
    not allowed. In modular arithmetic, not only 4/0 is not allowed, but 4/12 under modulo 6 is also not allowed.
    The reason is, 12 is congruent to 0 when modulus is 6.


    How to find modular division?
    The task is to compute a/b under modulo m.
    1) First check if inverse of b under modulo m exists or not.
        a) If inverse doesn't exists (GCD of b and m is not 1),
              print "Division not defined"
        b) Else return  "(inverse * a) % m"
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
int modInverse(int base2, int mod)
{
    int x, y; // used in extended GCD algorithm
    int g = gcdExtended(base2, mod, &x, &y);

    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;

    // m is added to handle negative x
    return (x%mod + mod) % mod;
}

// Function to compute a/b under modulo m
int modDivide(int base1, int base2, int mod)
{
    base1 = base1 % mod;
    int inv = modInverse(base2, mod);
    if (inv == -1)
       cout << "Division not defined";
    else
       return (inv * base1) % mod;
}

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

    cout<<"\nModular Multiplication: "<<(base1*base2*base3)%mod;
    cout<<"\nModular Multiplication: "<<( (base1%mod)*(base2%mod)*(base3%mod) )%mod;


    cout<<"\nModular Division: "<<modDivide(base1, base2, mod);

    //output:
    //    Enter base1: 22
    //    Enter base2: 26
    //    Enter base3: 29
    //    Enter mod: 5
    //
    //    Modular Multiplication: 3
    //    Modular Multiplication: 3
    //    Modular Division: 2
}
