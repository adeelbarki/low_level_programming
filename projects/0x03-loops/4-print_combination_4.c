#include <stdio.h>

void print_combination_4(void)
{
	int i, j, k, m, tmp_01, tmp_02;
	int result_01, result_02;
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 10; j++)
		{
			for(k= 0; k < 10; k++)
			{
				for(m = 0; m < 10; m++)
				{
					tmp_01 = i*10;
					result_01 = tmp_01 + j;
					tmp_02 = k*10;
					result_02 = tmp_02 + m;
					
					
					if(result_01 != result_02)
					{
						printf("%d%d %d%d,", i, j, k, m);
						
					}
				
				}
			}
		}
	}
}
