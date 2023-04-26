#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Returns: 0 always
 */
void times_table(void)
{       
        int n;
        int i = 57;
        
        for (n = 48; n <= 57; n++)
        {       
                int t = n * i;
		_putchar(t);
		_putchar('\n');
        }
}
