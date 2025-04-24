// This is a C++ program demonstrating basic error handling and output.
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    double b = 2.0;
    float c = 3.5f; // Explicit conversion of the floating-point number

    cout << "Value of x: " << a << endl;
    if (b == -1) {
        cout << "Value of y: " << c << endl;
    } else {
        cout << "Value of y: " << b << endl;
    }

    return 0;
}
