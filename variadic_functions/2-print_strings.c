#include "variadic_functions.h"

void
print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *z = NULL;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		z = va_arg(list, char *);

		if (z == NULL)
			printf("(nil)");
		else
			printf("%s", z);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
