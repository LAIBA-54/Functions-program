#include <iostream>

using namespace std;
void displayGrid(int rows, int cols, char ch) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << ch << " ";
        }
        cout << endl; 
    }
}

int main() {
    int rows, cols;
    char ch;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    cout << "Enter the character to display: ";
    cin >> ch;
    displayGrid(rows, cols, ch);

    return 0;
}

