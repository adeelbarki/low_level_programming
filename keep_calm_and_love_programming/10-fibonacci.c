#include <stdio.h>

int main(void)
{

	unsigned long int i, sum, tmp;


	i = 0; 
	sum = 1;
	tmp = 0;
	
	while(sum < 4000000)
	{
		tmp = sum;
		sum = i + sum;
		if(sum > 4000000)
		{
		break;
		}
		i = tmp;
		if(sum % 2 == 0){
		printf(" %lu,", sum);
		}
	}
	return (0);
}
	
