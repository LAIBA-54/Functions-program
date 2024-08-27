#include <iostream>

using namespace std;
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Before swapping:" << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;
    swapValues(num1, num2);
    cout << "After swapping:" << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    return 0;
}

