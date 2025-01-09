#include <iostream>
#include <string>
#include <cmath>

int main()
{
    float b1;
    float h;
    std::cout << "b1: ";
    std::cin >> b1;
    std::cout << "h: ";
    std::cin >> h;
    std::cout << b1 << "\n";
    std::cout << h << "\n";
    float area = (1.0 / 2) * b1 * h;
    std::cout << "Area: " << area << "\n";
}