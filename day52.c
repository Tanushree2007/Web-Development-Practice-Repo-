#include"stdio.h"
int recur(int number)
{
	if (number==0)
		return 0;
	return number%10+recur(number/10);
}