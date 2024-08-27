#include <iostream>

using namespace std;
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double base, height;

    // Get input from the user
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    double area = calculateArea(base, height);
    cout << "The area of the triangle with base " << base << " and height " << height << " is: " << area << endl;

    return 0;
}

