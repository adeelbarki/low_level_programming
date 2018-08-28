#include <stdio.h>

void modify_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = '1';
	printf("value of '*cc': %p\n", cc);
	printf("Address of '*cc': %p\n", &cc);
	printf("value of 'ccc': %c\n", ccc);
	printf("Address of 'ccc': %p\n", &ccc);
	
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{	
	char c;
	char *p;
		
	p = &c;
	c = 'H';

	printf("Value of 'c'before the call: %d ('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p); 
	
	modify_my_char_var(p, c);

	printf("Value of 'c' after the call: %d ('%c')\n", c, c);
	printf("Address of 'c' after the call: %p\n", &c); 
		 
	return (0);
}
