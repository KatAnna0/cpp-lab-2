#include <cmath>

long long double_factorial(int x) {
    long long res = 1;
    for (x; x > 0; x -= 2) {
        res *= x;
    }
    return res;
}

long double t(long double x) {
    long double a = 0, b = 0;
    for (int k = 0; k <= 10; k++) {
        a += (pow(x, 2*k + 1)) / double_factorial(2*k + 1);
        b += (pow(x, 2*k)) / double_factorial(2*k);
    }
    return a / b;
}

long double res(long double y) {
    return (7*t(0.25) + 2*t(1+y)) / (6 - t(y*y - 1)); 
}