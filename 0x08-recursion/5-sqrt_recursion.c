/**
 * helper - helper function
 * @i: value
 * @n: power
 * Return: Always 0.
 *
 */

int helper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = helper(i + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - returns square root
 * @n: integer to return
 * Return: returns int of squareroot
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper(i, n) == n && n != 1)
		return (-1);
	return (helper(i, n));
}
