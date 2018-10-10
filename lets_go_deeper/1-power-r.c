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
        else if(y > 0 && x>0)
        {
                result = x*power(x,(y-1));
		if(result < x)
		{
			return -1;
		}
		else
			return result;
	}
        else
		return -1;

}

