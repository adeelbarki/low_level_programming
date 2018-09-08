#include "my_functions.h"

char *nconcat_strings(char *dest, const char *src, int n)
{

	int i;
	char *pstart;

	pstart = dest;
	for(; dest != '\0'; dest++);
	for(i = 0; i <= *(src + i); i++)
	{
		*(dest++) = *(src + i);
	}
	*(dest++);
	
	return pstart; 

}


