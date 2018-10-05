char *uppercase_string(char *c)
{

	char *x;
	for(x=c; *x!='\0'; x++)
	{
		if(*x >= 97 && *x <= 122)
		{
			*x = *x - 32;
		}

	}
	return c;
}
