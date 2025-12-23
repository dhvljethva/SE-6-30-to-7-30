#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

// Function to show global variable
void showGlobal() {
    cout << "Inside function, globalVar = " << globalVar << endl;
}

// Function to show local variable
void showLocal() {
    int localVar = 20;   // Local variable
    cout << "Inside function, localVar = " << localVar << endl;
}

int main() {
    cout << "Inside main, globalVar = " << globalVar << endl;

    showGlobal();  // Access global variable

    showLocal();   // Access local variable

    // Uncommenting the line below will cause an error
    // cout << localVar;

    return 0;
}
