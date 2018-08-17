#include <stdio.h>

	
int main(void)
{

	int i, j;
	char c;
	
	i = 98;
	j = 0;
	c = 'd';

	if(i < 50)
	{
		printf("%d < 50 is true\n", i);
	}
	if(i >= 50)
	{
		printf("%d >= 50 is true\n", i);
	}
	if(c < 102)
	{
		printf("%c (%d) < %d (%c) is true\n", c, c, 102, 102);
	}
	if(c >= 102)
	{
		printf("%c (%d) < %d (%c) is true\n", c, c, 102, 102);
	}
	if(j == 0)
	{
	printf("ZERO!\n");
	}
	if(j < i)
	{
	printf("j (%d) < i (%d)\n", j, i);
	}
	if(i == j )
	{
	printf("i equals j\n");
	}
	else
	{
	printf("i != j\n");
	}


	return (0);
}
