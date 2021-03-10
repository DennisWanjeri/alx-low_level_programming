#include <stdio.h>
#include <stdlib.h>
/**
 *int_index - searches for an int
 *
 *@array:array
 *@size:no. of elements of array
 *@cmp:function to call to compare the two numbers
 *Return:int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp && size && array)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
