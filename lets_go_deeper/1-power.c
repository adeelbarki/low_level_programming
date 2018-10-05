int power(int x, int y)
{

	int result;
	result = 1;
	if(y == 0)
	{
		return 1;
	}
	else if(x<0 || y<0)
	{
		return -1;
	}
	for(; y>0; y--)
	{
		result = result*x;
	}
	return result;
}
