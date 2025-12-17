#include <iostream>

int main() {
    double a, b;
    std::cin >> a >> b;
    double area = a * b;
    double perimeter = 2 * (a + b);
    std::cout << area << " " << perimeter << std::endl;
    return 0;
}
