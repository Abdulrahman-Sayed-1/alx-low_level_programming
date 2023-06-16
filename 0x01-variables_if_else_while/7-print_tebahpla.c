#include <stdio.h>
int main(void)
{
        int num = 'z';
        while(num >= 'a')
                putchar(num--);

        putchar('\n');
        return (0);
}

