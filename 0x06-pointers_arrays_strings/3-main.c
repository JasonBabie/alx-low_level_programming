#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char s1[] = "Jason";
	char s2[] = "Locale!";

	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", strcmp(s2, s1));
	printf("%d\n", strcmp(s1, s1));
	return (0);
}
