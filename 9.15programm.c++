#include <iostream>

using namespace std;
int calculateSquare(int num) {
    return num * num;
}
int calculateCube(int num) {
    return num * num * num;
}

int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    int square = calculateSquare(num1);
    int cube = calculateCube(num2);
    int result = square + cube;
    cout << "The square of " << num1 << " is: " << square << endl;
    cout << "The cube of " << num2 << " is: " << cube << endl;
    cout << "The sum of the square and the cube is: " << result << endl;

    return 0;
}

