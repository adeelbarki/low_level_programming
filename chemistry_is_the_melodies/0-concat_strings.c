#include "my_functions.h"

char *concat_strings(char *dest, const char *src)
{

	int i;
	char *pstart;
	pstart = dest;
	for(; *dest != '\0'; dest++);
	for(i = 0; *(src + i) != '\0'; i++)
	{
		*(dest++) = *(src + i);
	}
	*(dest++) = '\0';
	return pstart;
	
}
	
