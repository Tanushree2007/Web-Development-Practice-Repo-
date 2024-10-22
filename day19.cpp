#include "iostream"
using namespace std;
main()
{
        int n,t,c,r,s=0;
        cout<<"number";
        cin>>n;
        t=n;
        while (n!=0)
        {
                r=n%10;
                s=s*10+r;
                n/=10;
        }
        if (t==s)
                cout<<"palindrome";
        else
                cout<<"not palindrome";
}
