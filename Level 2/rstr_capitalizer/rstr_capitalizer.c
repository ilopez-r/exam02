#include <unistd.h>

int main (int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (argc == 1)
		write (1, "\n", 1);
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			if (argv[j][i] >= 65 && argv[j][i] <= 90)
				argv[j][i] += 32;
			if ((argv[j][i] >= 97 && argv[j][i] <= 122) && (argv[j][i + 1] == ' ' || argv[j][i + 1] == '	' || argv[j][i + 1] == '\0'))
				argv[j][i] -= 32;
			write (1, &argv[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		j++;
		i = 0;
	}
}	
