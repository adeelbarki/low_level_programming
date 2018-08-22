#include <unistd.h>

int print_int(int d)
{	
	return (write(1, &d, 1));
}
