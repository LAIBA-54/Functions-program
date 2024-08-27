#include <iostream>
long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;
    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        long long result = factorial(number);
        std::cout << "Factorial of " << number << " is " << result << std::endl;
    }
    
    return 0;
}

