#include <unistd.h>

int main ( int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0' && argv[2][j] != '\0')
		{
			j = 0;
			if (argv[1][i] == argv[2][j])
			{
				while (i > k)
				{
					while (i > k && (argv[1][i] != argv[1][k]))
						k++;
					if (i > k && (argv[1][i] == argv[1][k]))
							i++;
				}
				k = 0;
				if (argv[1][i] != '\0')
				{
					write (1, &argv[1][i], 1);
					i++;
				}
			}
			while  (argv[1][i] != '\0' && argv[2][j] != '\0' && (argv[1][i] != argv[2][j]))
			{
				j++;
				if (argv[1][i] == argv[2][j])
				{
					while (i > k && argv[1][i] == argv[2][j])
                	{
                		while (i > k && (argv[1][i] != argv[1][k]))
                    		k++;
                    	if (i > k && (argv[1][i] == argv[1][k]))
                        	i++;
					}	
					k = 0;
                	if (argv[1][i] != '\0' && argv[1][i] == argv[2][j])
                	{
                        write (1, &argv[1][i], 1);
                        i++;
                    }
					j = 0;
				}	
			}
			if (argv[2][j] == '\0' && (argv[1][i] != argv[2][j]))
			{
				i++;
				j = 0;
			}
		}
	}
	write (1, "\n", 1);
}
