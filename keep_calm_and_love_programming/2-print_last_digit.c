void print_char(char);

void print_last_digit(int n)
{

	if(n < 0)
	{
	n = n*(-1);
	}
	n = n % 10; 
	print_char(n + 48);	
}
