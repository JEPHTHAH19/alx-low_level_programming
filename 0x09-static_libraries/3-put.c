#include "main.h"
/**
 * _puts - prints a string
 * @str: The string to print
 *
 * Description: prints the string
 * on success: Return the number of character printed
 */

	void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}
