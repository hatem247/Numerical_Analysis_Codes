#include <iostream>
#include <vector>
using namespace std;
double lagrange(double point, vector<double> x, vector<double> y) {
    for (int i = 0; i < x.size(); i++) {
        if (x[i] > point) {
            double x0 = x[i - 1], x1 = x[i], y0 = y[i - 1], y1 = y[i];
            double term1 = y0 * ((point - x1) / (x0 - x1));
            double term2 = y1 * ((point - x0) / (x1 - x0));
            return term1 + term2;
        }
    }
    throw invalid_argument("Target x is out of range of the x values");
}
//int main()
//{
//    int n;
//    cout << "Enter the size: ";
//    cin >> n;
//    vector<double> x(n), y(n);
//    double point;
//    cout << "Enter the x values: ";
//    for (int i = 0; i < n; i++) {
//        cin >> x[i];
//    }
//    cout << "Enter the y values: ";
//    for (int i = 0; i < n; i++) {
//        cin >> y[i];
//    }
//    cout << "Enter the target x: ";
//    cin >> point;
//    double interpolated = lagrange(point, x, y);
//    printf("Interpolated: %.6f\n", interpolated);
//}
