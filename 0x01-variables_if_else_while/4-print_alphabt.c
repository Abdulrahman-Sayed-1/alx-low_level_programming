#include <stdio.h>
int main(void)
{
	for(int i = 97 ; i <= 122 ; i++)
	{ 
		if((char)i != 'e' && (char)i != 'q')
			putchar(i);
	}

	putchar('\n');

	return (0);
}
