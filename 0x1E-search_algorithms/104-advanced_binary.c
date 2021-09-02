#include "search_algos.h"
/**
 *advanced_binary_recursive - recursively searches for a value in a sorted
 *array of integers using binary search.
 *@array: pointer to first element of array to search
 *@left: starting index of sub array
 *@right: ending index of sub array
 *@value: value to search for
 *Return: if value is not present, -1
 *otherwise index where value is located
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}
/**
 *advanced_binary - searches for a value in a sorted array of integers
 *using advanced binary search
 *@array: pointer to first element of array to sort
 *@size: number of elements in an array
 *@value: value to search for
 *Return: -1 or index of value
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
