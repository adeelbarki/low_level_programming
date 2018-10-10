int result(int, int);

int is_prime_number(int n)
{

	if(n < 2) return 0;
	return result(n, n/2);
}

int result(int n, int m)
{

	if(m==1){
		return 1;
	}
	else{
		if(n % m == 0) return 0;
		else return result(n, m-1);
	}
}
