#include <stdio.h>

/**
 * main - a simple program that outputs unordered
 * combinations of two digit integers without duplicates
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			l = j + 1;
			k = i;
			for (; k < 58; k++)
			{
				for (; k < 58; k++)
				{
					putcha(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || k != 57 || j != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
