int	    is_power_of_2(unsigned int n)
{
	if (n % 2 == 0 && n != 0 || n == 1)
		return (1);
	else
		return (0);
}
