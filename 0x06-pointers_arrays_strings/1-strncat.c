/**
 * _strncat - concatenates two strings to n (or less) characters
 * @*dest: the destination pointer
 * @*src: the source pointer (to be appended to @*dest)
 * @n: the number of characters from src to append (starting from the first)
 *
 * Return: the destionation pointer (*dest)
 */
char *_strncat(char *dest, char *src, int n)
{

	int i, j, k;
	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	while ((j < n) && *(src + j) != '\0')
	{
		j++;
	}
	for (k = 0; k < j; k++)
	{
		*(dest + i + k) = *(src + k);
	}
	return (dest);
}
