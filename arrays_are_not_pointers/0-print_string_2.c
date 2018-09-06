#include <stdio.h>

int print_char(char c);

void print_string_2(char *str)
{

	int i, len;
	char ch;
	for(len = 0; str[len] != '\0'; len++);
	for(i = 0; i <= len; i++)
	{
		
		if (i % 2 == 0)
		{ 
			ch = str[i];
			print_char(ch);
		}
	} 
}
