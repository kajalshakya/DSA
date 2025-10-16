#include <bits/stdc++.h>
using namespace std;

/*
    Function: myPow(x, n)
    Purpose:  Compute x raised to the power n (x^n) using
              Fast Exponentiation (Exponentiation by Squaring)

    Time Complexity: O(log n)
    Why? Each recursive call reduces n by half (n / 2)

    Key Ideas:
    - Any number to the power 0 is 1
    - Negative powers: x^(-n) = 1 / x^n
    - If n is even:      x^n = (x^(n/2))^2
    - If n is odd:       x^n = x * (x^(n/2))^2
*/
double myPow(double x, int n) {

    // Base Case: x^0 = 1
    if (n == 0) return 1;

    // If exponent is negative
    if (n < 0) {
        // Convert to reciprocal form: x^(-n) = (1/x)^n
        x = 1 / x;

        // Special case: n = INT_MIN (cannot directly do -n due to overflow)
        if (n == INT_MIN) {
            // Take one 'x' and safely convert the rest of exponent
            return x * myPow(x, -(n + 1));
        }

        // Safely convert negative n to positive
        n = -n;
    }

    // Recursive call: compute x^(n/2)
    double halfPow = myPow(x, n / 2);

    // Square the half result: (x^(n/2))^2
    double halfPowSquare = halfPow * halfPow;

    // If n is odd, multiply one extra x
    if (n % 2 != 0) {
        return x * halfPowSquare;
    }

    // If n is even, just return squared value
    return halfPowSquare;
}

int main() {
    cout << myPow(2, -3);  // Expected output: 0.125
    return 0;
}
