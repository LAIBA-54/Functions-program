#include<iostream>
void displayTable(int num);

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    displayTable(number);
    return 0;
}
void displayTable(int num) {
    std::cout << "Multiplication table for " << num << " is:" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << num << " x " << i << " = " << num * i << std::endl;
    }
}

