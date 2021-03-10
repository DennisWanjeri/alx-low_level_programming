#ifndef CALC_H
#define CALC_H

/**
 *struct op - Struct op
 *
 *@op:the operator
 *
 *@f:function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
