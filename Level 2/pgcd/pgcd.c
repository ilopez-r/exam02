#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int i;
	int j;
 
	i = 2;
	j = 1;
	if (argc == 3)
	{
		while (atoi(argv[1]) >= i &&  atoi(argv[2]) >= i)
		{
			if (atoi(argv[1]) % i == 0 && atoi(argv[2]) % i == 0)
				j = i;
			i++;
		}
		printf("%d", j);
	}
	printf("\n");
}
