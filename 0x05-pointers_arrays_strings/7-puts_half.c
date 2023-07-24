#include "main.h"
/**
 * puts_half - a function that prints half of a string
 *
 * @str: input
 *
 * Return: half of the input
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
