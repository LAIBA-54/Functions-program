#include <iostream>
double area(double side) {
    return side * side;
}
double perimeter(double side) {
    return 4 * side;
}

int main() {
    double side;
    std::cout << "Enter the length of the side of the square: ";
    std::cin >> side;
    std::cout << "Area of the square: " << area(side) << std::endl;
    std::cout << "Perimeter of the square: " << perimeter(side) << std::endl;

    return 0;
}

