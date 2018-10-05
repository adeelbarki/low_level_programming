#include <limits.h>
int factorial(int n)
{ 

	int result;
	result = 1;
	if(n>0)
	{
	for(; n>=1; n--)
		{
			result = result*n;
		}
	}
	else if(n == 0)
	{
		return 1;
	}
	else if(n == INT_MAX)
	{
		return -1;
	}
	else
		return -1;
	return result;

}
