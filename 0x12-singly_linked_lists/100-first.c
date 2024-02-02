/**
 * purpose: to write  a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the main function is executed.
 * Return: 0
 */

#include <stdio.h>

void __attribute__ ((constructor)) before_main()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
