#include"iostream"
#include"math.h"
using namespace std;
int main()
{
        int n,s=0,c=0,x,d;
        cout<<"enter a no.";
        cin>>n;
        x=n;
        while(n!=0)
        {
                n=n/10;
                        c++;
        }
        n=x;
        while(n!=0)
        {
                int d=n%10;
                s=s+(int)pow(d,c--);
                n=n/10;
        }
        if(s==x)
        {
                cout<<"amstrong"<<endl;
        }
        else
        {
                cout<<"not"<<endl;
        }
}
