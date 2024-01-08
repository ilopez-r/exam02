#include<stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s[i] != reject[j] && s[i] != '\0' && reject[j] != '\0')
	{
		while (s[i] != reject[j] && s[i] != '\0' && reject[j] != '\0')
			i++;
		if (s[i] != reject[j])
		{
            i = 0;
			j++;
		}
	}
	if (reject[j] == '\0')
	{
		while (s[i] != '\0')
			i++;
	}
	return (i);
}
