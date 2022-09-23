/**
 * strncpy - copies a string from one pointer to another
 * @dest - the destination pointer
 * @src - the string to copy to @dest
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return dest;
}
