#include <iostream>
using namespace std;

int find_factors(int n) {
    cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    find_factors(number);
    return 0;
}
