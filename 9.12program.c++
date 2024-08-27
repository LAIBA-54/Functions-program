#include <iostream>

using namespace std;
char determineGrade(int marks) {
    if (marks >= 90 && marks <= 100) {
        return 'A';
    } else if (marks >= 80 && marks < 90) {
        return 'B';
    } else if (marks >= 70 && marks < 80) {
        return 'C';
    } else if (marks >= 60 && marks < 70) {
        return 'D';
    } else {
        return 'F'; 
    }
}

int main() {
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    if (marks < 0 || marks > 100) {
        cout << "Error: Marks should be between 0 and 100." << endl;
        return 1; 
    }

    char grade = determineGrade(marks);
    cout << "The grade for " << marks << " marks is: " << grade << endl;

    return 0;
}

