#include <iostream>
#include <cmath>

long double t(long double x, long long * double_factorial) {
    long double a = 0, b = 0;
    for (int k = 0; k <= 10; k++) {
        a += (pow(x, 2*k + 1)) / double_factorial[2*k + 1];
        b += (pow(x, 2*k)) / double_factorial[2*k];
    }
    return a / b;
}

int main() {
    long long double_factorial[22] {1, 1};
    for (int i = 2; i < 22; i++) {
        double_factorial[i] = i * double_factorial[i - 2];
    }
    
    long double y;
    std::cout << "Enter y (real number): ";
    std::cin >> y;
    std::cout << (7*t(0.25 , double_factorial) + 2*t(1+y, double_factorial)) / (6 - t(y*y - 1, double_factorial));

    return 0;
}

