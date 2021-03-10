/**
 *op_add - adds two int
 *
 *@a:int param
 *@b:int param
 *Return:int
 */
int op_add(int a, int b)
{
	int sum = 0;

	sum += (a + b);
	return (sum);
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
	int diff = 0;

	diff += (a - b);
	return (diff);
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
	int prod = 0;

	prod = a * b;
	return (prod);
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
	int div = 0;

	div = a / b;
	return (div);
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
	int mod = 0;

	mod = a % b;
	return (mod);
}
