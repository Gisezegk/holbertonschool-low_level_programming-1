#include "variadic_functions.h"

void
print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(list, char *));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
