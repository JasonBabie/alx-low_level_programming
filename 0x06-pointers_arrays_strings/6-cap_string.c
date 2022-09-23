/**
 * cap_string - capitalizes the first character of each word in a string based on particular word separators
 * @s: a pointer to the string
 *
 * Return: a pointer to the string
 */
int is_separator(char c, const char *separators)
{
	int i;
	if ((int)c > 63)
	{
		return (0);
	}

	i = 0;
	while ((separators[i] != '\0') && (c != separators[i]))
	{
		i++;
	}
	return (int)(separators[i] != '\0');
}


char *cap_string(char *s)
{
	int init_asci;
	int i;
	int asc;

	init_asci = (int)*s;
	if ((init_asci > 96) && (init_asci < 123))
	{
		*s = (char)(init_asci - 32);
	}
	i = 0;
	while (*(s + i) != '\0')
	{
		asc = (int)*(s + i);
		if ((asc > 96) && (asc < 123) && is_separator(*(s + i - 1), " \t\n,;.!?\"(){}"))
		{
			*(s + i) = (char)(asc - 32);
		}
		i++;
	}
	return (s);
}
