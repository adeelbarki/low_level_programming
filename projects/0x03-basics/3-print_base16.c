#include <stdio.h>

void print_base16(void)
{

	int i;
	int decimalNumber[16];
	for(i = 0; i < 16; i++)
	{
		decimalNumber[i] = i;
		printf("%X", decimalNumber[i]);
	}

}
