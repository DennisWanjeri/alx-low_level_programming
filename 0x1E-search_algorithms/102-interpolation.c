#include "search_algos.h"
/**
 *interpolation_search - searches for a value in sorted array using
 *interpolation search
 *@array:pointer to first element of array to search
 *@size:number of elements in the array
 *@value:value to search for
 *Return:value not present, array is NULL -1, otherwise first index
 *where element is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);
	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
