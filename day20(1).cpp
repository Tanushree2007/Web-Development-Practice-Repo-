#include "iostream"
using namespace std;
main()
{
        int a=5,b=6;
        cout<<a<<" "<<b<<"\n";
        int c=a;
            a=b;
            b=c;
        cout<<a<<" "<<b;
}