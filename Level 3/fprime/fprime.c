#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	int num;

	i = 2;
	if (argc == 2)
	{	
		num = atoi(argv[1]);
		if (num == 1)
			printf("1");
		while (num >= i)
		{
			while (num % i == 0)
			{
				num  = num  / i;
				printf("%d", i);
				if (num != 1)
					printf("*");
			}
			i++;
		}
	}
	printf("\n");
}
