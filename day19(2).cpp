#include "iostream"
using namespace std;
main()
{
        int a,b;
        cout<<"enter a number";
        cin>>a>>b;
        while(a!=b)

        {
                if(a>b)
                        a=a-b;
                else
                        b=b-a;
        }

        cout<<a;
}
