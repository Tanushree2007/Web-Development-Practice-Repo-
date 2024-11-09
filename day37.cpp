#include"iostream"
using namespace std;
int sum(int,int);
main()
{
	int x,a=10,b=20;
	x=sum(a,b);
	cout<<x;
}
int sum(int num1,int num2)
{
	int c=num1+num2;
	return c;
}