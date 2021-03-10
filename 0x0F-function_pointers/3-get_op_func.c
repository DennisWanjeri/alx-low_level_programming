#include <string.h>
#include "3-calc.h"
/**
 *get_op_func - selects right function to perform tasks selected by user
 *@s:operator passed as arguement to program
 *Return:pointer to a function that corresponds to operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (!strcmp(ops[i].op, s))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
