#include <iostream>
using namespace std;

int main()
{
    int number,i=1;
    cout << "Enter a no: ";
    cin >> number;
    cout << "Factors of " << number << " are: ";

    while ( i <= number)
      {
        if (number % i == 0)
        {
            if (i%2==0)
                cout <<i<<endl;
        }
        i++;
      }
 cout << endl;
}
