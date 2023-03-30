#include "main.h"

/**
 * times_table - The function prints the 9 times table, begining with 0
 */
void times_table(void)
{
	int number1, number2, number3;

	for (number1 = 0; number1 < 10; number1++)
	{
		for (number2 = 0; number2 < 10; number2++)
		{
			number3 = number2 * number1;
			if (number2 == 0)
			{
				_putchar(number3 + '0');
			}

			if (number3 < 10 && number2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(number3 + '0');
			} else if (number3 >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((number3 / 10) + '0');
				_putchar((number3 % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
