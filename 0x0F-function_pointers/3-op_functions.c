#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - adds two int
 *
 *@a:int param
 *@b:int param
 *Return:int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - returns diff of a and b
 *
 *@a:int param
 *@b:int param
 *
 *Return:difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - returns product of a and b
 *
 *@a:int
 *@b:int
 *
 *Return:product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - returns result of div of a and b
 *
 *@a:int
 *@b:int
 *
 *Return:div
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - returns modulus of a and b
 *
 *@a:int
 *@b:int
 *
 *Return: modulus
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
