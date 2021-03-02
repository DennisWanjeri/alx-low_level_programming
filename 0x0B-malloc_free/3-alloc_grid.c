#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of characters
 *@width:w
 *@height:l
 *
 *Return:NULL, Pointer
 *
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	int **arr = (int **)malloc(height * sizeof(int *));
	
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
	}
	return (arr);
}
