#include <iostream>
using namespace std;

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2);
    }
    cout << n % 2;
}

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n > 0) {
        cout << "Binary representation of " << n << " is: ";
        printBinary(n);
        cout << endl;
    } else {
        cout << "Please enter a positive integer." << endl;
    }

    return 0;
}
