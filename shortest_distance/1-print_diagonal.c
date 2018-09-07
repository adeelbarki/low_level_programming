#include "my_functions.h"

void print_diagonal(int n)
{

	int i, j;
	char ch;
	ch = 92;
	if(n <= 0)
	{
		printf("\n");
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf(" ");
		}
		printf("%c\n", ch);
	}
	
}
