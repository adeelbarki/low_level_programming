#include <stdio.h>

int main(void)
{

	unsigned long int i, n, tmp;
	i = 2;
	tmp = 0;
	n = 612852475143;
	
	for(i = 2; n > 1; i++)
	{
		while(n % i == 0)
		{

		
		printf(" %lu, ", i);
		n = n / i;	
		
		}
	}
		
	return (0);
}
