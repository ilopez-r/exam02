#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i;
	int size;
	int *range;

	i = 0;
	size = (end - start) + 1;
	if (size < 0)
		size = size * -1;
	range = malloc (sizeof(int) * size);
	range[i] = end;
	while (range[i] != start)
	{
		if (end <= start)
			end++;
		else
			end--;
		i++;
		range [i] = end;
	}
	return(range);
}

