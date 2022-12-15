#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers, strting with 1 and 2
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; i++)
	{
		if (j != 20365011074)
		{
			printf("%d, ", j);
		}
		else
		{
			Prinf("%d\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
