int		max(int* tab, unsigned int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (tab[i] == '\0')
		return (0);
	while (i < len)
	{
		if (tab[i] >= j)
			j = tab[i];
		i++;
	}
	return (j);
}
