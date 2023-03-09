#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int
main(int argc, char *argv[])
{
	int i, s = 0, it;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
	for (i = 1; argv[i]; i++)
	{
		for (it = 0; argv[i][it]; it++)
		{
			if (!isdigit(argv[i][it]))
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[i]);
	}
	}
		printf("%d\n", s);
		return (0);
}
