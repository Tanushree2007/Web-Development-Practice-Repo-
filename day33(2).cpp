#include "iostream"
using namespace std;
main()
{
        int i=1;
        while(i<=10)
        {
                cout<<i<<" "<<endl;
                if (i==3)
                {
                        i+=3;
                        continue;
                }
                i++;
        }
}