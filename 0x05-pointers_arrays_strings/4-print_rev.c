/**
 *print_rev - prints a string in reverse
 *
 *@s:input
 *
 *Return:void
 *
 */
void print_rev(char *s)
{
	int length, i;
	char *begin_ptr, *end_ptr, ch;

	length = _strlen(s);
	begin_ptr = s;
	end_ptr = s;

	for (i = 0; i < length - 1; i++)
		end_ptr++;

	for (i = 0; i < length / 2; i++)
	{

		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
}
