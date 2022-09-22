/**
 * _strcat - concatenates two strings
 * @*dest: the destination pointer
 * @*src: the source pointer (to be appended to @*dest)
 *
 * Return: the destionation pointer (*dest)
 */
char *_strcat(char *dest, char *src)
{

	int i, j, k;
	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(src + j) != '\0')
	{
		j++;
	}
	for (k = 0; k < j; k++)
	{
		*(dest + i + k) = *(src + k);
	}
	return dest;
}
