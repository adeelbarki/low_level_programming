int string_to_integer(char *s)
{

	int result, i, sign;
	i = 0;
	sign = 1;
	result = 0;

	if(*s == '\0')
		return 0;

	if(s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for(; s[i] != '\0'; ++i)
	{
		if(s[i] <= '0' || s[i] >= '9')
		return 0;

		result = result*10 + s[i] - '0';
	}
	return sign*result; 	


}
