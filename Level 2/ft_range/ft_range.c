#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i;
	int *range;
	int size;

	i = 0;
	size = end - start;
	if (size < 0)
		size *= -1;
	range = malloc(sizeof(int) * (size + 1));
	range[i] = start;
	while (range[i] != end)
	{
		if (start <= end)
			start++;
		else
			start--;
		i++;
		range[i] = start;
	}
	return(range);
}
