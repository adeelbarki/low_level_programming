#include <stdio.h>
void reverse_string(char *s)
{
	int i, len, ch;
	for(len = 0; s[len]; len++);
	for(i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
	}

}
