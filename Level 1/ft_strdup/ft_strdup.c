#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i;
	char *copy;

	i = 0;
	while (src[i] != '\0')
		i++;
	copy = malloc (sizeof(char) * i);
	if (copy == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{	
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
