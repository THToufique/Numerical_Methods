#include <iostream>
#include <cmath>
using namespace std;

// Define the function f(x) and its derivative f'(x)
double f(double x) {
    return x * x - 3 * x + 2; // Example: f(x) = x^2 - 3x - 2
}

double f_prime(double x) {
    return 2 * x - 3; // Derivative of f(x): f'(x) = 2x - 3
}

int main() {
    double x0, E;
    cout << "Enter initial guess x0 and error tolerance E: ";
    cin >> x0 >> E;

    double x1;
    int iteration = 1;

    while (true) {
        x1 = x0 - f(x0) / f_prime(x0); // Newton-Raphson formula
        if (fabs(f(x1)) < E) break;     // Check if |f(x1)| < E
        x0 = x1;                        // Update x0 to the new estimate
        iteration++;
    }

    cout << "Root: " << x1 << " after " << iteration << " iterations." << endl;
    return 0;
}
