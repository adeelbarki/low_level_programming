#include <limits.h>

int string_to_integer(char *s)
{

	int i, len, ch, result, sign;
	result = 0;
	i = 0;	
	sign = 1;
	for(len = 0; s[len] != '\0'; len++);
	
	while(i <= len)
	{
		if(s[i] == '-')
		{	
			sign = sign*(-1);
		}	
		if(s[i] >= '0' && s[i] <= '9')
		{
			ch = s[i];
			result = sign*(result*10 + ch - 48);
			
		}
	i++;
			
	}
	/*if(result > 2147483647)
	{
		result = 0;
		return result;
	}
	else
		return result;*/
}
