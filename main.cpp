#include <iostream>
#include <fstream>
#include <chrono>
#include <time.h>
#include "func.cpp"


int main() {    
    auto time_start = std::chrono::high_resolution_clock::now();

    long double y;
    std::cout << "Enter y (real number): ";
    std::cin >> y;
    std::cout << res(y) << std::endl;

    auto time_finish = std::chrono::high_resolution_clock::now();
    auto time_span = std::chrono::duration_cast<std::chrono::duration<double>>(time_finish - time_start);

    std::cout << time_span.count() << " seconds";

    return 0;
}

