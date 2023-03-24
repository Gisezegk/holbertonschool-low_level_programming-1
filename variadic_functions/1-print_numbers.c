#include "variadic_functions.h"

void
print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		/*
		* Siendo n = 5, vos queres que hayan 4 ;, por ende i se tiene que
		* comparar con 4, asi unicamente va a funcionar cuando i valga 3
		**/
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
