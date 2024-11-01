#include "iostream"
using namespace std;
int main()
 {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    int isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (isLeap)
        {
        cout << year << " is a leap year." << endl;
        }
        else
        {
        cout << year << " is not a leap year." <<endl;
        }

}
