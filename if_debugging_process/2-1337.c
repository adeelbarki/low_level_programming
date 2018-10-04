char *leet(char *c)
{

	char *x;
	for(x=c; *x!='\0'; x++)
	{
		switch(*x)
		{
			case 'a': case 'A': *x = 52; break;

			case 'e': case 'E': *x = 51; break;

			case 'o': case 'O': *x = 48; break;

			case 't': case 'T': *x = 55; break;

			case 'l': case 'L': *x = 49; break;
		}
	}
	return c;
}

