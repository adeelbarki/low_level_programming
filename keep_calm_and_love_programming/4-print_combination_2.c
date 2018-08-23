#include <stdio.h>

void print_combination_2(void)
{
	int i, j;

	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(i < j)
			{
				if(i != j)
				{
					printf(" %d%d, ", i, j);
				}		
			}
		}
	}	
		printf("\n");
}
