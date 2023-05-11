#include "search_algos.h"
#include <math.h>
/**
  *jump_search - a function that searches for a value
  in a sorted array of integers using the jump search algorithm
  * @array: a pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: the value to search for
  * Return: return the first index where value is loated
  */
 int jump_search(int *array, size_t size, int value)
{
		size_t i = 0, left = 0, right = 0, block = 0;
	
		if (!array || size == 0)
			return (-1);
	
		block = sqrt(size);
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	
		while (array[right] < value)
		{
			left = right;
			right = right + block;
			if (left != 0)
				printf("Value checked array[%lu] = [%d]\n", left, array[left]);
			if (right >= size)
		
				break;
		}
		printf("Value found between incexes [%lu] and [%lu]\n", left, right);
		if (right >= size)
			right = size -1;
		for (i = left; i <= right; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
		return (-1);
	}
