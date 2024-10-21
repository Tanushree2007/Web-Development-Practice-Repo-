#include "iostream"
using namespace std;
main()
{
        int n,r,s=0;
        cout<<"enter a no.";
        cin>>n;
        while( n>0)
                {
                r=n%10;
                s=s*10+r;
                n=n/10;
        }
        n=s;
        while(n>0)
        {
        r=n%10;
        switch(r)

                {

                case 1 :
                        cout<<"one";
                        break;
                case 2:
                        cout<<"two";
                        break;
                case 3:
                        cout<<"three";
                        break;
                case 4:
                        cout<<"four";
                        break;
                case 5:
                        cout<<"five";
                        break;
                case 6:
                        cout<<"six";
                        break;
                case 7:
                        cout<<"seven";
                        break;
                case 8:
                        cout<<"eight";
                        break;
                case 9:
                        cout<<"nine";
                        break;
                case 0:
                        cout<<"zero";
                        break;

                }
                n=n/10;
        }
}
~                                   