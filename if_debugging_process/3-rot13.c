char *rot13(char *c)
{

	char *x;
	for(x=c; *x!='\0'; x++)
	{
		if((*x >= 65 && *x <= 77) || (*x >= 97 && *x <= 109))
		{
			*x = *x + 13;
		}
		else if((*x >= 78 && *x <= 90) || (*x >= 110 && *x <= 122))
		{
			*x = *x - 13;
		}
	}
	return c;

}
