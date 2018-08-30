int print_char(char c);

void print_string(char *str)
{

	int i;
	char c;
	for(i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		print_char(c); 
	}
}
