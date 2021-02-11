/**
 *more_numbers - from 0-14 x10
 *
 *Description:0-14 x10
 *
 *Return:always zero
 *
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
