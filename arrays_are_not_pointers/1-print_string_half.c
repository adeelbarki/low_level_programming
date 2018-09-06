#include "my_functions.h"

void print_string_half(char *str)
{
	
	int i, len;
	char ch;
	for(len = 0; str[len]; len++);

	if(len % 2 != 0)
	{
		len = (len - 1);
	}

	for( i = len / 2; i <= len; i++)
	{			
			ch = str[i];
			print_char(ch);
	} 
	  
}

