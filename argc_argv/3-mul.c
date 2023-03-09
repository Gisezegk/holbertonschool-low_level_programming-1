#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int n1, n2, m;


	if (argc =! 3)
	{
		printf("0");
		return (0);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	m = n1 * n2;
	printf("%d\n", m);
	return (0);
}
