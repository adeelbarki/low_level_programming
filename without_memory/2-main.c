#include <stdio.h>

int str_len(char *str);

int main (void)
{

	char *str;
	int len;

	str = "Adeel Barki!";
	len = str_len(str);
	printf("%d\n", len);

	return (0);
}
