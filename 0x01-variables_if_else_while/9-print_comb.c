#include <stdio.h>
int main(void)
{
        int num = '0';

	while(num <= '9')
	{
		putchar(num++);
		if(num - 1 != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

        return (0);
}

