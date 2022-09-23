/**
 * reverse_array - reverses the contents of an integer array
 *@a: a pointer to the array
 *@n: the number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	 int i = 0;
	 int tmp;
	 n--;
	 while (i < n)
	 {
		 tmp = *(a + i);
		 *(a + i) = *(a + n);
		 *(a + n) = tmp;
		 i++;
		 n--;
	 }
}
