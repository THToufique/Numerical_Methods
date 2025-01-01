#include <iostream>
#include <cmath>
using namespace std;

// Define the function f(x)
double f(double x) {
    return x * x - 4 * x - 10;
}

int main() {
    double x0 = 4.0;  // First initial guess
    double x1 = 2.0;  // Second initial guess
    double tolerance = 0.0001;
    double x2;

    // Iteration counter (for tracking)
    int iteration = 0;

    // Secant Method loop
    while (fabs(f(x1)) > tolerance) {
        // Calculate the next approximation
        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));

        // Update the guesses
        x0 = x1;
        x1 = x2;

        // Increment iteration counter
        iteration++;

        // Print current approximation
        cout << "Iteration " << iteration << ": x = " << x2 << ", f(x) = " << f(x2) << endl;
    }

    // Output the approximate root
    cout << "\nThe root of the equation is approximately: " << x2 << endl;

    return 0;
}
