#include "my_functions.h"

void print_number(int n)
{
	
	int i, tmp, z, x, j;
	tmp = n;
	z = 0;
	for(i = 0; tmp != 0; i++)
	{
		tmp = tmp / 10;
	}
	if(n < 0)
	{
		print_char('-');
	}

	do
	{
		tmp = n;
		for(x = i; x > 1; x--)
		{
			tmp = tmp / 10;
		}
		j = tmp - (z*10);
		z = tmp;
		if(j < 0)
		{	
			j = j*(-1);
		}
		print_char(j + 48);
		i--;
	}
	while(i > 0);	
}	
