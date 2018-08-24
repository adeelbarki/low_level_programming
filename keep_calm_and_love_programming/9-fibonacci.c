#include <stdio.h>

int main(void)
{

	unsigned long int i, sum, tmp, j;	
	i = 0;
	sum = 1;
	printf(" %lu,", sum);
	tmp = 0;
	j = 0;
	while(j < 49){
	tmp = sum;
	sum = i + sum;
	i = tmp;
	printf(" %lu,", sum);
	j++;
	}



	return (0);
}
