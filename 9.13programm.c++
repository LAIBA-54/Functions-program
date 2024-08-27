#include <iostream>

using namespace std;
int mul(int a, int b) {
    
    if (a == 0) {
        return (b == 0) ? 1 : 0; 
    }
    return (b % a == 0) ? 1 : 0;
}

int main() {
    int num1, num2;
    char choice;

    do {

        cout << "Enter the first integer: ";
        cin >> num1;
        cout << "Enter the second integer: ";
        cin >> num2;
        if (mul(num1, num2)) {
            cout << num2 << " is a multiple of " << num1 << endl;
        } else {
            cout << num2 << " is not a multiple of " << num1 << endl;
}
        cout << "Do you want to enter another pair of integers? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); 

    cout << "Program terminated." << endl;

    return 0;
}

