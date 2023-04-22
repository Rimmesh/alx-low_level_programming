#include "variadic_functions.h"
#include <stdarg.h>


	/**
	 * sum_them_all - returns the sum of all it s parametres.
	 * @n: The number of arguments.
	 * @...: The  number of paramters to calculate the sum of.
	 *
	 * Return: 0 if n == 0 .
	 *         the sum of all parameters if n != 0.
	 */
	int sum_them_all(const unsigned int n, ...)
	{
		va_list ap;
		unsigned int i, sum = 0;


		va_start(ap, n);


		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);


		va_end(ap);


		return (sum);
	}

