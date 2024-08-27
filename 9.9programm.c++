#include <iostream>

using namespace std;
double performOperation(double num1, double num2, char op) {
    double result;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                result = 0; 
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            result = 0; 
            break;
    }

    return result;
}


