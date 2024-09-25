#include <iostream>
#include "func.cpp"
#include <fstream>

int main() {
    std::ofstream out;
    out.open("test_data.txt");
    if (out.is_open())
    {
        for (int i = 0; i < 10000; i++) {
            long double num = -20000 + rand()%40001;
            out << num << ' ' << round(res(num) * 100000) / 100000 << std::endl;
        }
    }
    out.close(); 
    std::cout << "Done" << std::endl;
    return 0;
}