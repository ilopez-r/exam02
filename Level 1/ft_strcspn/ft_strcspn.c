#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != reject[j])
		{
			i++;
			if (s[i] == '\0' && reject[j] != '\0')
			{
				i = 0;
				j++;
			}
		}
		if (s[i] == reject[j])
			return (i);
	}
	return (i);
}
