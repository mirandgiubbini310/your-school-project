#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 == 0) {
        cout << n * 3 << endl; // Output is odd, so it's three times the number
    } else {
        cout << n * 2 << endl; // Output is even, so it's double the number
    }
    
    return 0;
}
