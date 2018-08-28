#include <stdio.h>

int first_digit(int n)
{

	int i;
	for(i = 0; n != 0; n = n/10)
		i = n;
	if (i < 0)
		i = i * (-1);
	return i;
}
