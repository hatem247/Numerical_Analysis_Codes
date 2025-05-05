#include <iostream>
#include <vector>
using namespace std;
double trapezoidal(double h, vector<double> y) {
    double sum = y[0] + y[y.size() - 1];
    for (int i = 1; i < y.size() - 1; i++) {
        sum += 2 * y[i];
    }
    return (h / 2.0) * sum;
}

double simpson(double h, vector<double> y) {
    double sum = y[0] + y[y.size() - 1];
    for (int i = 1; i < y.size() - 1; i++) {
        if (i % 2 == 0) sum += 2 * y[i];
        else sum += 4 * y[i];
    }
    return (h / 3.0) * sum;
}

//int main()
//{
//    int n;
//    cout << "Enter the size: ";
//    cin >> n;
//    vector<double> y(n);
//    double a, b, h;
//    cout << "Enter the y values: ";
//    for (int i = 0; i < n; i++) {
//        cin >> y[i];
//    }
//    cout << "Enter a: ";
//    cin >> a;
//    cout << "Enter b: ";
//    cin >> b;
//    h = (b - a) / (n - 1);
//    double trapezoidal_res = trapezoidal(h, y);
//    printf("Trapezoidal: %.6f\n", trapezoidal_res);
//    double simpson_res = simpson(h, y);
//    printf("Simpson: %.6f\n", simpson_res);
//}