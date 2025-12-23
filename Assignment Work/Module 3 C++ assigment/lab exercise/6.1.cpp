#include <iostream>
using namespace std;

class Calculator {
public:
    // Function for addition
    int add(int a, int b)
    {
        return a + b;
    }

    // Function for subtraction
    int subtract(int a, int b) 
    {
        return a - b;
    }

    // Function for multiplication
    int multiply(int a, int b) 
    {
        return a * b;
    }

    // Function for division
    float divide(int a, int b)
    {
        return (float)a / b;
    }
};

int main() {
    Calculator calc;  

    int x = 10, y = 5;

    cout << "Addition: " << calc.add(x, y) << endl;
    cout << "Subtraction: " << calc.subtract(x, y) << endl;
    cout << "Multiplication: " << calc.multiply(x, y) << endl;
    cout << "Division: " << calc.divide(x, y) << endl;

    return 0;
}
