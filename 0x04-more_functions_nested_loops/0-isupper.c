#include <stdio.h>

int _isupper(char c)
{
	int i;
	for(i = 65; i <= 90; i++)
	{
		if (i == c)
		{
			return 1;
		}
	}
	return 0;
}
