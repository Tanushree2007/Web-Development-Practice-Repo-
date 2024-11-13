#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, term = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The series is: ";
    for (int i = 1; i <= n; i++) {
        term = term * 10 + 1;
        cout << term;
        if (i < n) {
            cout << " + ";
        }
        sum += term;
    }
    
    cout << endl << "Sum of the series: " << sum << endl;

    return 0;
}