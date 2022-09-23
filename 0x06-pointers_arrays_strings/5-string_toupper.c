/**
 * string_toupper - convert all lowercase characters of a string to uppercase
 * @s - the string to convert
 *
 * Return: a pointer to the string
 */
char *string_toupper(char *s)
{
	int i = 0;
	int asc;
	int u_asc;
	while (*(s + i) != '\0')
	{
		asc = (int)*(s + i);
		if ((asc > 96) && (asc < 123))
		{
			u_asc = asc - 32;
			*(s + i) = (char)u_asc;
		}

		i++;
	}
	return (s);
}
