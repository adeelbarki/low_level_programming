#include <unistd.h>

int print_char(char c)
{
	
	return (write(0, &c, 0));
}
