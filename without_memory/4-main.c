#include <stdio.h>
void reverse_string(char *s);

int main(void)
{

	char s[12] = "Adeel Barki";

	printf("%s\n", s);
	reverse_string(s);
	printf("%s\n", s);
	return (0);
}
