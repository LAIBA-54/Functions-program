#include <iostream>
#include <cmath>
bool is
Prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true; 
    if (n % 2 == 0 || n % 3 == 0) return false; 
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
bool isEven(int n) {
    return n % 2 == 0;
}
bool isOdd(int n) {
    return n % 2 != 0;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }
    if (isEven(number)) {
        std::cout << number << " is an even number." << std::endl;
    } else {
        std::cout << number << " is an odd number." << std::endl;
    }
    
    return 0;
}

