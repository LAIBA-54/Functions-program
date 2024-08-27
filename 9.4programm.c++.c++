#include<iostream>
void displayPredecessorSuccessor(int num);
int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    displayPredecessorSuccessor(number);

    return 0; 
}
void displayPredecessorSuccessor(int num) {
    int predecessor = num - 1;
    int successor = num + 1;

    std::cout << "Predecessor of " << num << " is: " << predecessor << std::endl;
    std::cout << "Successor of " << num << " is: " << successor << std::endl;
}

