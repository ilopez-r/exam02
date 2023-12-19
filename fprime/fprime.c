#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int num;

	i = 2;
	if (argc == 2)
	{
		num = atoi(argv[1]);	
		if (num == 1)
			printf("1");
		while (num > 1 && num != i)
		{
			while (num % i == 0)
			{
				printf("%d", i);
				printf("*");
				num = num / i;	
			}
			i++;
		}
		if (num == i)
			printf("%d", i);
	}
	printf("\n");
}
