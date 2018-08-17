#include <stdio.h>

void print_tebahpla(void)
{
	int i;
	char ch = 'z';  
	for(i = 0; i < 26; i++)
	{
		putchar(ch);
		ch = ch - 1;
		
	}
	putchar('\n');
}
