#include <iostream>
#include <cmath>
using namespace std;
double f(double x) {
    return x + sin(x) - 1;
}

double fdash(double x) {
    return 1 + cos(x);
}

double newtonRaphson(double x0, double Es) {
    double x1, error;
    do {
        x1 = x0 - f(x0) / fdash(x0);
        error = fabs((x1 - x0) / x1) * 100;
        x0 = x1;
    } while (error > Es);
    return x1;
}

int main()
{
    double x0, Es;
    cout << "Enter x0: ";
    cin >> x0;
    cout << "Enter Es: ";
    cin >> Es;
    double root = newtonRaphson(x0, Es);
    printf("The root of the equation: %.6f\n", root);
}