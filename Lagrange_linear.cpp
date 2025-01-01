#include <iostream>
using namespace std;

int main() {
    // Given data points
    double x1 = 2.0, f_x1 = 1.4142;  // sqrt(2)
    double x2 = 3.0, f_x2 = 1.7321;  // sqrt(3)
    double x = 2.5;  // The value at which we want to estimate f(x)

    // Applying the linear interpolation formula
    double f_x = f_x1 + (x - x1) * (f_x2 - f_x1) / (x2 - x1);

    // Output the result
    cout << "The approximate square root of " << x << " is: " << f_x << endl;

    return 0;
}
