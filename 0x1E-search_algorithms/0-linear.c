#include <stdio.h>
#include "search_algos.h"

/**
  * linear search - function that searches for a value
  * in an array of integers using the linear search algorithm
  * @array: array of integers
  * @size: number of elements in array
  * @value: value to search for
  * Return: returns the the first index where value is located
  */
 int linear_search(int *array, size_t size, int value)
{
	uint i = 0;
	if (!array || size == 0)
		return (-1);
	for (i=0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n",i,array[i]);
		if (array[i] == value)
			return (i);
	}
	return -1;
}

