#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


int
main(int argc, char *argv[])
{
	int num1, num2, r;

	/*
	* Crea un puntero de tipo funcion, le asigno los mismos valores del
	* prototipo
	**/
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/*
	* Llama a la funcion get_op_func y verifica si el operador pertenece
	* a alguno de la lista. Argv[2] corresponde al operador
	**/
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' && argv[1][0] == '0') ||
			(argv[2][0] == '/' && argv[3][0] == '0') ||
			(argv[2][0] == '%' && argv[3][0] == '0') ||
			(argv[2][0] == '%' && argv[1][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/** Le asigno al puntero lo que devuelve la funcion get_op_func*/
	f = get_op_func(argv[2]);

	/** Guarda en la variable r la operacion que realiza*/
	r = f(num1, num2);

	printf("%d\n", r);
	return (0);
}
