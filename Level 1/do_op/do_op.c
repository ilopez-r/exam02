#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int num;
	int num2;

	if (argc == 4)
	{
		num = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			num = num + num2;
		else if (argv[2][0] == '-')
			num = num - num2;
		else if (argv[2][0] == '*')
			num = num * num2;
		else if (argv[2][0] == '/')
			num = num / num2;
		else if (argv[2][0] == '%')
			num = num % num2;
		printf ("%d", num);
	}
	printf ("\n");
}
