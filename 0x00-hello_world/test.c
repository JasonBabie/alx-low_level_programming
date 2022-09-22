#include <stdio.h>

int main()
{
	char *s1 = "";
	char *s2 = NULL;
	printf("%d\n", *s1);
	printf("%lu\n", sizeof(*s2));
	return 0;
}
