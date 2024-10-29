#include "iostream"
using namespace std;
main()
{
        int i=1,j=1,n;
        cout<<"total rows";
        cin>>n;
        for(i=1;i<=n;i++)
        {
                for (j=1;j<=i;i++)
                {
                        cout<<j<<"\n"<<i;
                }
        }
}
