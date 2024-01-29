#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;
    int sum = 0;

    va_list no_of_args;
    va_start(no_of_args, n);

    for (i = 0; i < n; i++)
    {
        sum += va_arg(no_of_args, int);
    }
    va_end(no_of_args);
    return (sum);
}
