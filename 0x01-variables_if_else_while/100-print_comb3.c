#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = j + 1; j < 100; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 89 && j == 89)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
