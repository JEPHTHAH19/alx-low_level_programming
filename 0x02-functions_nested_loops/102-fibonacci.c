#include <stdio.h>
/**
 * main - main block
 * Description:  computes and prints the sum of all multiples
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", j);
	else if (i == 1)
	printf(", %ld", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %ld", k);
	}
	i++;
	}
	putchar('\n');
	return (0);
}
