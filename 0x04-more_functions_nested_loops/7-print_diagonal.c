#include "main.h"
/**
*print_diagonal - prints diagonal
* @n: integer argument
* Return: Always (1);
*/

void print_diagonal(int n)
{
	if (n <= 0)
{
	_putchar('\n');
}
else
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
{
	for (j = 0; j < i; j++)
{
	if (j == i - 1)
{
	_putchar('\\');
}
	else
{
	_putchar(' ');
}
}
	_putchar('\n');
}
}
}
