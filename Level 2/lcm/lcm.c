unsigned int    lcm(unsigned int a, unsigned int b)
{
	int lcm;

	lcm = 0;
	if (a != 0 && b != 0)
	{
		if (a > b)
			lcm = a;
		else
			lcm = b;
		while (lcm != 0)
		{
			if (lcm % a == 0 && lcm % b == 0)
				return (lcm);
			lcm++;
		}
			
	}
	return (lcm);
}
