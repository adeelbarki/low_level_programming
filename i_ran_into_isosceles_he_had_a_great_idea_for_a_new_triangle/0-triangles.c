#include <stdio.h>

void triangles_in_the_term(int h, int n)
{
	int i, j, k, m;
	char c;
	c = '*';
	if(h > 0 && n > 0){
	for(i = 0; i < n; i ++)
	{
		m = 1;
		for(j = 1; j <= h; j++)
		{
			for(k = 1; k <= m; k++)
				{
					printf("%c", c);
				}
			m = m + 2;
			printf("\n");
		}
		printf("\n");
	}
	}
}
