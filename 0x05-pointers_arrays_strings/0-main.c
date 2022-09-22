#include "main.h"


/**
 * main - declares an integer pointer and passes it to reset_to_98()
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 402;
	_putchar(n);
	reset_to_98(&n);
	_putchar(n);
	return (0);
}
