#include <stdio.h>

void print_combination_3(void)
{

	int i, j, k;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			for(k = 0; k < 10; k++)
			{
				if(i < j && j < k)
				{
					if(i != j && j != k)
					{
						printf(" %d%d%d,", i, j, k);
					}
				}
			}
		}
	}
}
