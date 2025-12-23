#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers
float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int num1, num2;
    char choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> choice;

    switch (choice) {
        case '+':
            cout << "Result = " << add(num1, num2);
            break;

        case '-':
            cout << "Result = " << subtract(num1, num2);
            break;

        case '*':
            cout << "Result = " << multiply(num1, num2);
            break;

        case '/':
            if (num2 != 0)
                cout << "Result = " << divide(num1, num2);
            else
                cout << "Error! Division by zero.";
            break;

        default:
            cout << "Invalid operation!";
    }

    return 0;
}
