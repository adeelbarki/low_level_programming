int string_length(char *s);
int compare(char *, char *, int);

int is_palindrome(char *s)
{

	int len, tmp;
	len = string_length(s);
	tmp = len % 2;
	return compare(s, s+len-1, tmp);
}

int string_length(char *s)
{

	if(*s=='\0') return 0;
	return 1 + string_length(s+1);
}

int compare(char *s, char *end, int m)
{

	if(m == 0) return compare(s+1, end-1, m-1);
	if(*s==*end) return 1;
	else return 0;
}
