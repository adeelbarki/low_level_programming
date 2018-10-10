int result(int, int);

int square_root(int n)
{
	if(n == 0) return 0;
	else if(n <= 0 ) return -1;
	else if(n == 1) return 1;
	else
		return result(n, n-1);
}

int result(int n, int m)
{
	if(m*m == n) return m;
	else if(m < 1) return -1;
	else
	return result(n, m-1);
}


