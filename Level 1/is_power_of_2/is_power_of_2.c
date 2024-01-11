int	    is_power_of_2(unsigned int n)
{
	int i;

	i = 2;
	while (n % i == 0 && n != 0)
		n = n / i;
	if (n == 1)
		return (1);
	else
		return (0);
}
