/**
 * leet - encodes a string int 1337
 * @s: a pointer to the string
 *
 * Return: a pointer to the string
 */
char *leet(char *s)
{
	int i;
	int j;
	char asci;
	char letters[5];
	char codes[5];
	letters[0] = 'a';
	letters[1] = 'e';
	letters[2] = 'o';
	letters[3] = 't';
	letters[4] = 'l';
	codes[0] = '4';
	codes[1] = '3';
	codes[2] = '0';
	codes[3] = '7';
	codes[4] = '1';
	i = 0;
	while (*(s + i) != '\0')
	{
		asci = (int)*(s + i);
		j = 0;
		while ((j < 5) && ((int)letters[j] != asci) && ((int)letters[j] - 32 != asci))
		{
			j++;
		}
		if (j != 5)
		{
			*(s + i) = codes[j];
		}
		i++;
	}
	return (s);
}
