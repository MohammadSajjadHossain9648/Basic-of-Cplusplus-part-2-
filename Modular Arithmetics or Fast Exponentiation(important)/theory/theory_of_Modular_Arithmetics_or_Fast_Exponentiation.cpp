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
*/
/*  before start read this: https://codeforces.com/blog/entry/72527?f0a28=1

    Modular arithmetic is the branch of arithmetic mathematics related with the “mod” functionality. Basically,
    modular arithmetic is related with computation of “mod” of expressions. Expressions may have digits and
    computational symbols of addition, subtraction, multiplication, division or any other. Here we will discuss
    briefly about all modular arithmetic operations.

    1.Quotient Remainder Theorem
    2.Modular Addition
    3.Modular Subtraction
    4.Modular Multiplication
    5.Modular Division
    6.Modular Inverse
    7.Modular Exponentiation
*/
/*  why we use Modular arithmetic?
    for example, find the value of 210!?
    in code, if we take input as int and output as int. it causes overflow. so thats why we need Modular arithmetic.
    solution is ->we need to take input as long long int and output as long long int.

    in competitive, we see print output as modulo 10^9+7?
    so, we need mod the value like (a%mod);
    like, First off, some important identities about the modulo operator:

    ((a mod m)+(b mod m)) mod m = (a+b) mod m
    ((a mod m)−(b mod m)) mod m = (a−b) mod m
    ((a mod m)*(b mod m)) mod m = (a*b) mod m
*/
/*
    1.Quotient Remainder Theorem:
    Quotient and Remainder are parts of division along with dividend and divisor.

    The number which we divide is known as the dividend. The number which divides the dividend is known as the divisor.
    The result obtained after the division is known as the quotient and the number left over is the remainder.

             Divisor) Dividend (  Quotient

                    ------------
                      remainder

    formula: 1. Quotient = Dividend/Divisor
             2. Dividend = Divisor x Quotient + Remainder
             => Remainder = Dividend - (Divisor x Quotient)

    Use of Quotient Remainder Theorem:
    Quotient remainder theorem is the fundamental theorem in modular arithmetic. It is used to prove Modular Addition,
    Modular Multiplication and many more principles in modular arithmetic.

*/
/*
    2.Modular Addition
    Rule for modular addition is:
    (a + b) mod m = ((a mod m) + (b mod m)) mod m ->can write -> ((((a mod m)mod m)mod m) + (b mod m)) mod m
    (a + b + c) mod m = ((a mod m) + (b mod m) + (c mod m)) mod m

    We’ll show the above using an example to illustrate the process.
    Let m = 499, a = 501, b = 997.
    Then (a+b)%m can be calculated as:
    => (a % m + b % m) % m
    => (501 % 499 + 997 % 499) % 499
    => (2 + 498) % 499
    => 500 % 499
    => 1
    And (a+b)%m = (501+997)%499 = 1498%499 = 1.

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


    We’ll show the above using an example to illustrate the process.
    Let m = 499, a = 501, b = 997.
    Then (a-b)%m can be calculated as:
    => (a % m - b % m + m) % m
    => (501 % 499 + 997 % 499 + 499) % 499
    => (2 - 498 + 499) % 499
    => 3 % 499
    => 3
*/
/*
    4.Modular Multiplication
    Rule for modular multiplication is:
    (a * b) mod m = ((a mod m) * (b mod m)) mod m ->can write -> ((((a mod m)mod m)mod m) * (b mod m)) mod m
    (a * b * c) mod m = ((a mod m) * (b mod m) * (c mod m)) mod m

    We’ll show the above using an example to illustrate the process.
    Let m = 499, a = 501, b = 997.
    Then (a*b)%m can be calculated as:
    => (a % m * b % m) % m
    => (501 % 499 * 997 % 499) % 499
    => (2 * 498) % 499
    => 996 % 499
    => 497

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
    7.Modular Exponentiation
    Finding a^b mod m is the modular exponentiation. There are two approaches for this – recursive and iterative.

    Example:
    a = 5, b = 2, m = 7
    (5 ^ 2) % 7 = 25 % 7 = 4
*/


int main()
{
}
